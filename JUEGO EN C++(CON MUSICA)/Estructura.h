#ifndef ESTRUCTURA_H0
#define ESTRUCTURA_H
#include<iostream>

using namespace std;

///Estructura de los Caminos 
struct Nodo
{
	int Num;			//Vida de los Moustros
	Nodo *Izq;			//Desplazamiento hacia la Izquierda 
	Nodo *Der;			//Desplazamiento hacia la Derecha
	Nodo *Ant;			//Desplazamiento hacia el Anterior
};typedef Nodo *Arbol;	//Colocar un Sobre Nombre a la Estructura


///Estructurea de la Personaje
struct Personaje
{
	string Nombre;		//Nombre del Jugador
	int Vida=1000;		//Vida Inicial de Jugador
	int Score=1;		//Experiencia que se acumula al jugador
	int Est=1;			//Si el Personaje esta Vivo o Muerto
};

#endif
