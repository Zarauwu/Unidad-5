#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define NUMELTS 10
using namespace std;

class Radix
 {
   private:
   
   public:
   Radix(){ }
   void radixsort(int x[], int n);
   
               
 };
 
void Radix::radixsort(int x[], int n)
{
	int front[10], rear[10];

	struct {
		int info;
		int next;
	} node[NUMELTS];
	
	int exp, first, i, j, k, p, q, y;
 
  /*Inicializar una lista vinculada */
	for (i = 0; i < n-1; i++)
	{
		node[i].info = x[i];
		node[i].next = i+1;
	} 
	
	node[n-1].info = x[n-1];
	node[n-1].next = -1;
	first = 0; /* first es la cima de la lista vinculada */
	
	for (k = 1; k < 5; k++) 
	{
	
		for (i = 0; i < 10; i++)
		{
		/*Inicializar colas */
			rear[i] = -1;
			front[i] = -1;
		} 

		/* Procesar cada elemento en la lista */
		while (first != -1)
		{
			p = first;
			first = node[first].next;
			y = node[p].info;
			
			exp = pow(10, k-1);
			j = (y/exp) % 10;
			/* Insertar y en queue[j] */
			q = rear[j];
			if (q == -1)
				front[j] = p;
			else
				node[q].next = p;
			rear[j] = p;
		} 
		for (j = 0; j < 10 && front[j] == -1; j++);
			;
		first = front[j];
	 
	    /* Vincular las colas restantes */
		while (j <= 9)
		{ 	/* Verificar si se ha terminado */
			/*Encontrar el elemento siguiente */
			for (i = j+1; i < 10 && front[i] == -1; i++);
				;
			if (i <= 9)
			{
				p = i;
				node[rear[j]].next = front[i];
			} 
			j = i;
		} 
		node[rear[p]].next = -1;
	} 
 
	/* Copiar de regreso al archivo original */
	for (i = 0; i < n; i++) 
	{
    		x[i] = node[first].info;
    		first = node[first].next;
	} 
}/* fin de radixsort*/
 
















