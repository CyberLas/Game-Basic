#ifndef GENERAR_H
#define GENERAR_H

///Generar el Mapa de Juego

void Generar(Arbol &ABB,Arbol &Temp,int x)
{
	if(ABB==NULL)						// Si los Caminos estan vacios
	{
		ABB=new Nodo();					// Cración de nuevos Caminos
		ABB->Num = x;					// Moustros Autogenerados
		ABB->Izq = NULL;				// Conexion de Caminos Izquierda
		ABB->Der = NULL;				// Conexion de Caminos Derecha
		ABB->Ant = Temp;				// Conexion de Caminos Anterior
	}
	Temp=ABB;							// Copia de Caminos
	if (x<ABB->Num)						// Conexion de Caminos
	{
		Generar(ABB->Izq,Temp,x);		/*Llamar a Generar para generar Caminos a la Izquierda*/
	}else 		
		if (x>ABB->Num)					// Comprobacion de Caminos
		{
		Generar(ABB->Der,Temp,x);		/*Llamar a Generar para generar Caminos a la Derecha*/
	}
}

#endif
