#include <iostream> 

using namespace std; 

class Quicksort
{
	private:
		int ar[], lon, iz, der, ar2[];
	public:
		QuickSort(){int lon=0;
		}
		void ordenA(int ar2[], int lon);
		void ordenD(int ar2[], int lon);
		void qsrt(int ar[], int iz, int der);
};


void Quicksort::ordenA(int ar2[], int lon)
{
	int temp; 
	for(int i=0;i<lon;i++)
	{ 
            for(int j=0;j<lon-1;j++)
			{ 
                if(ar2[j]>ar2[j+1])
				{
                    temp=ar2[j]; 
                    ar2[j]=ar2[j+1]; 
                    ar2[j+1]=temp;
				}
			}
	}
    for(int i=0;i<lon;i++)
    {
		cout<<ar2[i]<<" | ";
	}
	cout<<" "<<endl;
}

void Quicksort::ordenD(int ar2[], int lon)
{
	int temp;
	for(int i=0;i<lon;i++)
	{ 
        for(int j=0; j<lon-1; j++)
		{ 
        	if(ar2[j]<ar2[j+1])
			{ 
           		temp=ar2[j]; 
            	ar2[j]=ar2[j+1]; 
                ar2[j+1]=temp;
			}
				
		}
	}
	for(int i=0;i<lon;i++)
    {
        cout<<ar2[i]<<" | ";
	}
	cout<<" "<<endl;
}


void Quicksort::qsrt(int ar[], int iz, int der)
{
	int i,j,x,aux;
     i = iz;
     j = der;
	 x= ar[(iz+der)/2]; 
	   do{
	   	while((ar[i]<x)&&(j<=der))
	   	   {
	   		i++;
		   }
		while((x<ar[j])&&(j>iz))
		{
			j--;
		}
		if(i<=j)
		{
			aux=ar[i]; ar[i]=ar[j]; ar[j]=aux;
			i++; j--;
		}
		
	   }while(i<=j);
	   if(iz<j)
	   qsrt(ar,iz,j);
	   if(i<der)
	   qsrt(ar,i,der);
}



