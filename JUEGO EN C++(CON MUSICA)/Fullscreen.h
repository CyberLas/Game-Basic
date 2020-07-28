#ifndef FULLSCREEN_H
#define FULLSCREEN_H

#include <Windows.h>	

///Funcion para Ejecutar el Programa en Pantalla Completa

void AltEnter()
{
	keybd_event(VK_MENU, 0x38, 0, 0);					/*Creacion del evento Agrandar pantalla*/
	keybd_event(VK_RETURN, 0x1c, 0, 0);					/*Creacion del evento que no retorna nada*/
	keybd_event(VK_RETURN, 0x1c, KEYEVENTF_KEYUP, 0);	/*Creacion del evento Resolucion de Ancho*/
	keybd_event(VK_MENU, 0x38, KEYEVENTF_KEYUP, 0);		/*Creacion del evento Resolucion de Largo*/
	return;
}

#endif
