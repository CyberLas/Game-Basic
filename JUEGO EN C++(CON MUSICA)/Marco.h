#ifndef MARCO_H
#define MARCO_H

#include "Gotoxy.h"


/// Generar el Marco de la Pantalla Principal 

void Marco() 
{
	for (int i = 1;i<121;i++)
	{
		gotoxy(i, 1);			/* Dibujar en la Corrdernada (x,y) */
		cout << char(178);		// Caracater ASCII a escribir
		gotoxy(i, 30);			/* Dibujar en la Corrdernada (x,y) */	
		cout << char(178);		// Caracater ASCII a escribir
	}
	for (int d = 2;d<30;d++)
	{
		gotoxy(1, d);			/* Dibujar en la Corrdernada (x,y) */
		cout << char(178);		// Caracater ASCII a escribir
		gotoxy(120, d);			/* Dibujar en la Corrdernada (x,y) */
		cout << char(178);		// Caracater ASCII a escribir	
	}
}

#endif
