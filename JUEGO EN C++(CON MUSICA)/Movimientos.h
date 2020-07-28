#ifndef MOVIMIENTOS_H
#define MOVIMIENTOS_H

#include "Matar.h"
#include "Marco.h"
void Datos(Personaje ElPersonaje[]);
///Opciones Para elegir El Camino Deseado

void Movimientos(Arbol &ABB,Personaje ElPersonaje[], int opc,int y){
	///Opcion para Regresar al Camino Anterior
	if(opc == 0)
	{
		if(ABB->Ant==NULL)						//Si el Camino anterior Esta Vacio 
		{
			cout<<"AQUI NO HAY SALIDA"<<endl;
		}else{   
			ABB=ABB->Ant;						//Retrocer der al Camino Anteior
		}
	}
	///Opcion para Dirigirse al Camino de la Derecha
	if(opc == 1)
	{
		if(ABB->Der==NULL)						//Si el Camino de la Derecha Esta Vacio 
		{
			cout<<"AQUI NO HAY SALIDA"<<endl;
		}else{
			if(ABB->Num == 0)					//Si el Moustro Sigue Vivo			
			{
				system("cls");
				Marco();
				ABB=ABB->Der;					//Avanzar al Camino de la Derecha
				Ataque(ABB,ElPersonaje,y);		/*LLamada de Funcion Ataque*/
			}else{
				cout<<"Monstro aun vivo "<<endl;
				cout<<"Nueva batalla "<<endl;
				Ataque(ABB,ElPersonaje,y);		/*LLamada de Funcion Ataque*/
			}
		}
	}
	///Opcion para Dirigirse al Camino de la Izquierda
	if(opc == 2)
	{
		if(ABB->Izq==NULL)						//Si el Camino de la Izquierda Esta Vacio 
		{			
			cout<<"AQUI NO HAY SALIDA"<<endl;
		}else{
			if(ABB->Num == 0)					//Si el Moustro Sigue Vivo
			{
				system("cls");
				Marco();
				ABB=ABB->Izq;					//Avanzar al Camino de la Derecha
				Ataque(ABB,ElPersonaje,y);		/*LLamada de Funcion Ataque*/
			}else{
				cout<<"Monstro aun vivo "<<endl;
				cout<<"Nueva batalla "<<endl;
				Ataque(ABB,ElPersonaje,y);		/*LLamada de Funcion Ataque*/
			}
		}
	}
}
//

#endif
