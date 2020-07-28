#ifndef JUGAR_H
#define JUGAR_H
#include "Letras.h"
#include "Marco.h"
#include "Voces.h"
void SubMenu(Arbol &ABB,int & opc);

/// Cuando Inicio de La Aventura o Juego

void Jugar(Arbol &ABB,Arbol &Temp,Personaje ElPersonaje[],int y)
{
	int opc,numero;								//Variable de Datos
	do
	{
		numero=0;								//Variable para saber si ganó
		
		SubMenu(ABB,opc);						/* Llamada de SubMenu de Opciones */
		
		Voces9();
		
		Movimientos(Temp,ElPersonaje,opc,y);	/* Llamada de Movimiento del jugador */
		
		Verificar(ABB,numero);					/* Llamada de Verificar si un moustro sigue vivo */
		
		if(ElPersonaje[y].Vida<=0)				// Saber si el personaje sigue vivo
		{
			system("cls");						/* Borrar todo lo de consola */
			Marco();
			Perdedor();
			gotoxy(40,28);
			
			break;								// Salir del Bucle
		}
		if(numero==0)							// Verificar si gano el jugador
		{
			system("cls");						/* Borrar todo lo de consola */
			Marco();
			Ganador();
			gotoxy(40,28);
			system("pause");
			break;								// Salir del Bucle
		}
	}while(1);
	
}

//Sub Menu de Opciones
void SubMenu(Arbol &ABB,int &opc)
{
	system("cls");								/* Borrar todo lo de consola */
	Voces10();
	Marco();									/* Llamada de Marco */
	Titulo7();									/*Llamado de la funcion Titulo6*/
	Mostrar(ABB,0);								/* Llamado de Caminos de Moustros */
	cout<<"\n\t\t\t\t\t\t..:: Por Donde Desea ir ::..\n\n";
	cout<<"\t\t\t\t\t[0] Regresar "<<endl;
	cout<<"\t\t\t\t\t[1] Derecha  "<<endl;
	cout<<"\t\t\t\t\t[2] Izquierda"<<endl;
	cout<<"\t\t\t\t\t\t  >> ";
	cin>>opc;
	
} 
#endif
