#ifndef JUEGO_H
#define JUEGO_H
#include <iostream>
#include "Generar.h"
#include "Mostrar.h"

///Generador de Monstruos

void Juego(Arbol &ABB,Arbol &Temp)
{
	int x;							//Variable de Datos
	for (int i=0;i<10;i++)			//Contador de Moustros
	{
		x = 10+rand()%(20);			//Generador de Moustros Aleatorios
		Generar(ABB,Temp,x);		/*Colocacion de Moustros en Caminos*/
	}
	ABB->Num = 0;					//Primer Camino inicializado en 0
	Temp=ABB;						//Copia del la Matriz
}
#endif
