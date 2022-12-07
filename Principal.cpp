#include <iostream>
#include <stdlib.h>
#include "Burbuja.h" 
#include "Shell.h"
#include "Quicksort.h"
#include "Radix.h"

using namespace std;

int main()
{

	Burbuja MB;
	Shell s;
	Quicksort q;
	Radix r;
	//lon=LONGITUD O NUMERO DE ELEMENTOS A ORDENAR
	int lon, opc, opc2, n, ar[lon], ns; 
	do
	{
	system("cls");
	cout<<"**********FERNANDA MARTINES VENTURA"<<endl;
	cout<<"**********VALERIA ZARAZUA BELTRAN"<<endl;
	cout<<"Metodos de Ordenamiento"<<endl;
	cout<<"1. Burbuja"<<endl;
	cout<<"2. Shellshort"<<endl;
	cout<<"3. Quicksort"<<endl;
	cout<<"4. Radix"<<endl;
	cout<<"5.Salir"<<endl;
	cin>>opc;
	system("cls");
	switch(opc)
	{
		
		case 1:cout<<" 1. Burbuja "<<endl;
		cout<<" Inserte la longitud del arreglo"<<endl;
		cin>>lon;
		for(int i=0; i<lon; i++)
		{ 
            cout<<"Ingresa El Elemento "<<i+1<<": "; 
            cin>>n; 
            ar[i]=n; 
        }
		MB.Ordenar(ar, lon);
		
		system("pause");
			break;
		case 2:cout<<" 2. Shellsort "<<endl;
		cout<<"Inserta el tamanio del arreglo"<<endl;
		cin>>ns;
		s.insertar(ns, ar);
		s.ordenar(ar, ns);
		do
		{
			system("cls");
			cout<<" 1. Acendente \n 2. Descendente \n 3. Salir"<<endl;
			cin>>opc2;
			system("cls");
			switch(opc2)
			{
				case 1:cout<<"1. Acendente"<<endl;
				s.shellA(ns, ar);
				system("pause");
					break;
				case 2:cout<<"2. Descendente"<<endl;
				s.shellD(ns, ar);
				system("pause");
					break;
				case 3:cout<<"--salio de Shellsort"<<endl;
				system("pause");
					break;
				default:cout<<"seleccione una opcion correcta"<<endl;
				system("pause");
					break;
			}
		}while(opc2<=1||opc2<3||opc2>3);
			break;
		case 3:cout<<" 3. Quicksort "<<endl;
		cout<<" Inserte la longitud del arreglo"<<endl;
		cin>>lon;
		for(int i=0;i<lon;i++)
		{ 
            cout<<"Ingresa El Elemento "<<i+1<<": "; 
            cin>>n; 
            ar[i]=n; 
        }
        do
        {
        	system("cls");
			cout<<" 1. Acendente \n 2. Descendente \n 3. Salir"<<endl;
			cin>>opc2;
			system("cls");
			switch(opc2)
			{
				case 1:cout<<" 1. Acendente"<<endl;
				q.ordenA(ar,lon);
				q.qsrt(ar,lon,1);
				system("pause");
					break;
				case 2:cout<<" 2. Descendente"<<endl;
				q.ordenD(ar,lon);
				q.qsrt(ar,1,lon);
				system("pause");
					break;
				case 3:cout<<" --salio de Quicksort"<<endl;
				system("pause");
					break;
				default:cout<<" elija una opcion correcta"<<endl;
				system("pause");
					break;
			}
		}while(opc2<=1||opc2<3||opc2>3);
			break;
		case 4:cout<<"4. Radix"<<endl;
		cout<<"Inserte la longitud del arreglo"<<endl;
		cin>>lon;
		for(int i=0;i<lon;i++)
		{ 
            cout<<"Ingresa El Elemento "<<i+1<<": "; 
            cin>>n; 
            ar[i]=n; 
        }
        if(lon)
        {
        	r.radixsort(ar, lon);
		}
		do
		{
			system("cls");
			cout<<"1. Acendente"<<endl;
			cout<<"2. Descendente"<<endl;
			cout<<"3. Salir"<<endl;
			cin>>opc2;
			system("cls");
			switch(opc2)
			{
				case 1:cout<<" 1. Acendente"<<endl;
				for (int i=0;i<lon;i++)
	            {
	            	cout<<"|";
			   		cout<<ar[i];
			    }
			    system("pause");
					break;
				case 2:cout<<"2. Descendente"<<endl;
				for(int i=lon-1;i>=0;i--)
				{
					cout<<"|";
		        	cout<<ar[i];
	            }
	            system("pause");
					break;
				case 3:cout<<"SEE YOU SPACE SAMURAI"<<endl;
				system("pause");
					break;
				default:cout<<" elija una opcion correcta"<<endl;
				system("pause");
					break;
			}	
		}while(opc2<=1||opc2<3||opc2>3);
			break;
		default:cout<<"elija una opcion correcta"<<endl;
		system("pause");
			break;
			case 5:cout<<"SEE YOU SPACE COWBOY"<<endl;
		system("pause");
		exit(0);
		break;
	}
	}while(opc>=1||opc>=3||opc<0||opc<=3);
	system("pause");
	return 0;
}
