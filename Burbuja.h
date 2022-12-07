#include <iostream> 
using namespace std; 

class Burbuja
{
    private:
    int numeros[], aux;
    
    public:
    MetodoB() 
    {
    int aux=0, numeros[aux];
    }
    
    void Ordenar(int numeros[], int aux);
};

void Burbuja::Ordenar(int numeros[], int aux)
{
		int Faye,opcS;
		do
		{
			cout<<"Como desea solicitar el arreglo"<<endl;
			cout<<"1. Acendente"<<endl;
			cout<<"2. Descente"<<endl;
			cout<<"3. Salir"<<endl;
			cin>>opcS;
			system("cls");
			switch(opcS)
			{
				case 1:
				for(int i=0; i<aux; i++)
				{ 
                	for(int j=0; j<aux-1; j++)
					{ 
    	                if(numeros[j]>numeros[j+1])
						{ 
            	            Faye=numeros[j]; 
                	        numeros[j]=numeros[j+1]; 
                    	    numeros[j+1]=Faye;
						}
					}
				}
				cout<<"1. ASCENDENTE"<<endl;
                 for(int i=0;i<aux;i++)
            	{
                    cout<<numeros[i]<<" | ";
				}
				cout<<" "<<endl;
				system("pause");
					break;
				case 2:
				for(int i=0; i<aux; i++)
				{ 
                	for(int j=0; j<aux-1; j++)
					{ 
                    	if(numeros[j]<numeros[j+1])
						{ 
        	                Faye=numeros[j]; 
            	            numeros[j]=numeros[j+1]; 
                	        numeros[j+1]=Faye;
						}
					}
				}
				cout<<"2. DESCENDENTE"<<endl;
				for(int i=0; i<aux; i++)
            	{
                    cout<<numeros[i]<<" | ";
				}
				cout<<" "<<endl;
				system("pause");
					break;
				case 3:cout<<"SEE YOU SPACE COWBOY"<<endl;
					break;
				default:cout<<"va de nuez"<<endl;
				system("pause");
					break;
				
			}
		}while(opcS<=1||opcS<3||opcS>3);
		
		
				
		
} 
    
