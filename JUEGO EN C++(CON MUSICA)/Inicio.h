#ifndef INICIO_H
#define INICIO_H
#include "Letras.h"
#include "Gotoxy.h"
#include "Marco.h"
#include <locale.h>
#include <clocale>
using namespace std;

///Datos del usuario para el Juego

void Inicio(Personaje ElPersonaje[])
{
	setlocale(LC_CTYPE,"Spanish");
	Titulo5();						/*Llamado de la funcion Titulo5*/
	
	cin.ignore();					//Borrar caracteres antes ingresados como letras o numeros
	Voces4();
	gotoxy(35,17);					/*Llamado de Gotoxy(x,y)*/
	cout<<" >> Ingresar Nombre del Personaje : ";
	getline(cin,ElPersonaje[0].Nombre);

	
	gotoxy(36,19);					/*Llamado de Gotoxy(x,y)*/
	cout<<"\t >> Usted Cuenta con : "<<endl;
	
	gotoxy(40,21);					/*Llamado de Gotoxy(x,y)*/
	cout<<"\t[*] Su vida inicial es : "<<ElPersonaje[0].Vida<<"%"<<endl;
	
	gotoxy(40,23);					/*Llamado de Gotoxy(x,y)*/
	cout<<"\t[*]  Su Puntuación  es   : 0 "<<endl;
	
	gotoxy(40,28);
	Voces6();
	system("pause");				/*Detener el proceso en ejecución*/
	system("cls");					/*Borrar todo lo que esta en Consola*/
	
	Marco();
	Titulo6();						/*Llamado de la funcion Titulo6*/
	gotoxy(40,28);					/*Llamado de Gotoxy(x,y)*/
	system("pause");				/*Detener el proceso en ejecución*/
}
	
#endif
