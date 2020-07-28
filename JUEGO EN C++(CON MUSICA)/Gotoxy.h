#ifndef GOTOXY_H
#define GOTOXY_H

#include <Windows.h>

///Manipular la datos Ventana de Consola 

void gotoxy(int x, int y)
{
	HANDLE hcon;								//Encarga de llamar a una funcion recursiva
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);		//Se almacena en una Variable para la funcion de salida
	COORD dwPos;								//Coordenadas dentro de la Consola
	dwPos.X = x;								//Coordenada X
	dwPos.Y = y;								//Coordenada Y
	SetConsoleCursorPosition(hcon, dwPos);		//Establecer la posición del cursor de la consola(x,y)
}

#endif
