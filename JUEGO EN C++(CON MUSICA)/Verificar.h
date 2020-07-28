#ifndef VERIFICAR_H
#define VERIFICAR_H

/// Verificar si el Jugador Derroto a Cada Moustro

void Verificar(Arbol ABB,int & numero)
{
	if(ABB!=NULL)						//Saber si Los caminos No existen
	{
		Verificar(ABB->Izq,numero);		/* Llama del camino Izquierdo */
		numero+=ABB->Num;				// Suma de Cada Camino
		Verificar(ABB->Der,numero);		/* Llama del camino Derecho */
	}
}

#endif
