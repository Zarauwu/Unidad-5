#include<iostream>
#include <new>
#include <cstdlib>

using namespace std;

class Shell
{
	private:
		int ar[], n;
	public:
		Shell(){int n=0;};
		void insertar(int l, int n[]);
		void ordenar(int ar[], int n);
		void shellA(int l, int n[]);
		void shellD(int l, int n[]);	
};


void Shell::insertar(int l, int n[])
{
	int i;
    for(i=0;i<l;i++)
    {
        cout<<"Ingresa un numero "<<i+1<<": ";
        cin>>n[i];
    }
}

void Shell::ordenar(int ar[], int n)
{
	int i, j, in, temp;
  	
  
  for(in=1;in<n;in=in*3+1);
   
      while (in>0)
      {
          for (i=in;i<n;i++)
          {
                j=i;
                temp=ar[i];
                while((j>=in) && (ar[j-in]>temp))
                {
                    ar[j]=ar[j-in];
                    j=j-in;
                }
       
                ar[j]=temp;
          }
         
          in/= 2;
      }
}


void Shell::shellD(int l, int n[])
{
	int i;
    for(i=0;i<l;i++)
    {
        cout<<n[i]<<" | ";
    }
    cout<<" "<<endl;
}

void Shell::shellA(int l, int n[])
{
	for(int j=l-1;j>=0;j--)
    {
        cout<<n[j]<<" | ";
    }
    cout<<" "<<endl;
}

