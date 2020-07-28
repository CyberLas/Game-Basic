#ifndef MOSTRAR_H
#define MOSTRAR_H
#include "Gotoxy.h"
#include <conio.h>

/// Mostrar los Montruos

int x=0;								// Variable Estaticas solo para Esta Función
int i=0;								// Variable Estaticas solo para Esta Función

void Nivel(int i,int nro);

void Mostrar(Arbol ABB, int nro)	
{
	if (ABB==NULL)						// No se Generaron Montruos
	{
		return;							// Retorna al Incio
	}
	x+=5;
	Mostrar(ABB->Izq, nro+2);			/* Lamada de Mostrar a la Izquierda */
	if(nro==0)							// Inicio del Camino si es Cero
	{
		gotoxy(55,15);					/*Llamado de Gotoxy(x,y)*/
		cout <<ABB->Num<<endl<<endl;
		Nivel(i,nro);					/* Llamado de Niveles */
	}else{
		gotoxy(35+x+4-nro,15+nro);		/*Llamado de Gotoxy(x,y)*/
		cout <<ABB->Num<<endl<<endl;
		i++;							//Contador Sumando
		Nivel(i,nro);					/* Llamado de Niveles */
	}
	
	Mostrar(ABB->Der, nro+2);			/* Lamada de Mostrar a la Derecha */
	
	if(x>=39)							// Si termino de Imprimir los datos
	{	
		x=0;							// Contador Reiniciados
		i=0;							// Contador Reiniciados
	}
}

//Niveles de Juego
void Nivel(int i,int nro)
{
	if(nro==0)							//Nivel 1 de los Moustros
	{
		cout<<"\t\t\t Nivel [1] : "<<endl;		
	}
	if(i==4)							//Nivel 2 de los Moustros
	{
		cout<<"\t\t\t Nivel [2] : "<<endl;
	}
	if(i==6)							//Nivel 3 de los Moustros
	{
		cout<<"\t\t\t Nivel [3] : "<<endl;
	}
}
#endif
