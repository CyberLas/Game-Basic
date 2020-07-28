#ifndef LETRAS_H
#define LETRAS_H

#include <fstream>
#include <Windows.h>
#include "Voces.h"
#include <clocale>
using namespace std;

//
void Titulo1()
{
	string nombreArchivo = "F:\\Titulos\\Titulo1.txt";		// Ubicacion de los Archivos
	ifstream flujoEntrada;									// Flujo de Entrada de Datos
	flujoEntrada.open(nombreArchivo.c_str());				// Abrir Datos
	string linea;											// Variable de Lectura
	Sleep(500);												// Dormir el proceso en 500 Milisegundos
	int i=0;												// Contador
	while(getline(flujoEntrada,linea))						// Leer Flujo Datos del Archivo
	{
		gotoxy(5,7+i);										/*Llamado de Gotoxy(x,y)*/
		cout<<linea;
		Sleep(200);											// Dormir el proceso en 200 Milisegundos
		cout<<endl;											// Salto de Linea
		i++;												// Contador Sumando
	}
	flujoEntrada.close();									// Cerrar el Archivo 
}
//
void Titulo2()
{
	string nombreArchivo = "F:\\Titulos\\Titulo2.txt";		// Ubicacion de los Archivos
	ifstream flujoEntrada;									// Ubicacion de los Archivos
	flujoEntrada.open(nombreArchivo.c_str());				// Abrir Datos
	string linea;											// Variable de Lectura
	Sleep(500);												// Dormir el proceso en 500 Milisegundos
	int i=0;												// Contador
	while(getline(flujoEntrada,linea))						// Leer Flujo Datos del Archivo
	{
		gotoxy(3,3+i);										/*Llamado de Gotoxy(x,y)*/
		cout<<linea;
		Sleep(200);											// Dormir el proceso en 200 Milisegundos
		cout<<endl;
		i++;												// Contador Sumando
	}
	flujoEntrada.close();									// Cerrar el Archivo 
}	
//
void Titulo3()
{
	string nombreArchivo = "F:\\Titulos\\Titulo3.txt";		// Dormir el proceso en 200 Milisegundos
	ifstream flujoEntrada;									// Ubicacion de los Archivos
	flujoEntrada.open(nombreArchivo.c_str());				// Abrir Datos
	string linea;											// Variable de Lectura
	Sleep(500);												// Dormir el proceso en 500 Milisegundos
	int i=0;												// Contador
	while(getline(flujoEntrada,linea))						// Leer Flujo Datos del Archivo
	{
		gotoxy(4,16+i);										/*Llamado de Gotoxy(x,y)*/
		cout<<"\t\t\t    "<<linea;
		Sleep(200);											// Dormir el proceso en 200 Milisegundos
		cout<<endl;
		i++;												// Contador Sumando
	}
	flujoEntrada.close();									// Cerrar el Archivo 
}
//
void Titulo4()
{
	string nombreArchivo = "F:\\Titulos\\Titulo4.txt";		// Dormir el proceso en 200 Milisegundos
	ifstream flujoEntrada;									// Ubicacion de los Archivos
	flujoEntrada.open(nombreArchivo.c_str());				// Abrir Datos
	string linea;											// Variable de Lectura
	Sleep(500);												// Dormir el proceso en 500 Milisegundos
	int i=0;												// Contador
	while(getline(flujoEntrada,linea))						// Leer Flujo Datos del Archivo
	{
		gotoxy(3,9+i);										/*Llamado de Gotoxy(x,y)*/
		cout<<linea;
		Sleep(200);											// Dormir el proceso en 200 Milisegundos
		cout<<endl;
		i++;												// Contador Sumando
	}
	flujoEntrada.close();									// Cerrar el Archivo 
}
//
void Titulo5()
{
	string nombreArchivo = "F:\\Titulos\\Titulo2.txt";		// Dormir el proceso en 200 Milisegundos
	ifstream flujoEntrada;									// Ubicacion de los Archivos
	flujoEntrada.open(nombreArchivo.c_str());				// Abrir Datos
	string linea;											// Variable de Lectura
	Sleep(500);												// Dormir el proceso en 500 Milisegundos
	int i=0;												// Contador
	while(getline(flujoEntrada,linea))						// Leer Flujo Datos del Archivo
	{
		gotoxy(3,3+i);										/*Llamado de Gotoxy(x,y)*/
		cout<<linea;
		Sleep(200);											// Dormir el proceso en 200 Milisegundos
		cout<<endl;
		i++;												// Contador Sumando
	}
	flujoEntrada.close();									// Cerrar el Archivo 
}
//
void Titulo6()
{
	setlocale(LC_CTYPE,"Spanish");
	string nombreArchivo = "F:\\Titulos\\Titulo5.txt";		// Dormir el proceso en 200 Milisegundos
	ifstream flujoEntrada;									// Ubicacion de los Archivos
	flujoEntrada.open(nombreArchivo.c_str());				// Abrir Datos
	string linea;											// Variable de Lectura
	Sleep(500);												// Dormir el proceso en 500 Milisegundos
	int i=0;												// Contador
	Voces8();
	Voces16();
	Voces7();
	while(getline(flujoEntrada,linea))						// Leer Flujo Datos del Archivo
	{
		gotoxy(3,3+i);										/*Llamado de Gotoxy(x,y)*/
		cout<<linea;
		Sleep(200);											// Dormir el proceso en 200 Milisegundos
		cout<<endl;
		i++;												// Contador Sumando
	}
	flujoEntrada.close();									// Cerrar el Archivo 
}
//
void Titulo7()
{
	string nombreArchivo = "F:\\Titulos\\Titulo6.txt";		// Dormir el proceso en 200 Milisegundos
	ifstream flujoEntrada;									// Ubicacion de los Archivos
	flujoEntrada.open(nombreArchivo.c_str());				// Abrir Datos
	string linea;											// Variable de Lectura
	Sleep(500);												// Dormir el proceso en 500 Milisegundos
	int i=0;												// Contador
	while(getline(flujoEntrada,linea))						// Leer Flujo Datos del Archivo
	{
		gotoxy(3,3+i);										/*Llamado de Gotoxy(x,y)*/
		cout<<"\t\t\t   "<<linea;
		Sleep(200);											// Dormir el proceso en 200 Milisegundos
		cout<<endl;
		i++;												// Contador Sumando
	}
	flujoEntrada.close();									// Cerrar el Archivo 
}
//
void Titulo8()
{
	string nombreArchivo = "F:\\Titulos\\Titulo7.txt";		// Dormir el proceso en 200 Milisegundos
	ifstream flujoEntrada;									// Ubicacion de los Archivos
	flujoEntrada.open(nombreArchivo.c_str());				// Abrir Datos
	string linea;											// Variable de Lectura
	Sleep(500);												// Dormir el proceso en 500 Milisegundos
	int i=0;												// Contador
	while(getline(flujoEntrada,linea))						// Leer Flujo Datos del Archivo
	{
		gotoxy(3,3+i);										/*Llamado de Gotoxy(x,y)*/
		cout<<"\t\t   "<<linea;
		Sleep(200);											// Dormir el proceso en 200 Milisegundos
		cout<<endl;
		i++;												// Contador Sumando
	}
	flujoEntrada.close();									// Cerrar el Archivo 
}
//
void Ganador()
{
	string nombreArchivo = "F:\\Imagen\\Ganador.txt";		// Dormir el proceso en 200 Milisegundos
	ifstream flujoEntrada;									// Ubicacion de los Archivos
	flujoEntrada.open(nombreArchivo.c_str());				// Abrir Datos
	string linea;											// Variable de Lectura
	Sleep(500);												// Dormir el proceso en 500 Milisegundos
	int i=0;												// Contador
	Voces12();
	while(getline(flujoEntrada,linea))						// Leer Flujo Datos del Archivo
	{
		gotoxy(3,3+i);										/*Llamado de Gotoxy(x,y)*/
		cout<<"\t\t\t"<<linea;
		Sleep(200);											// Dormir el proceso en 200 Milisegundos
		cout<<endl;
		i++;												// Contador Sumando
	}
	flujoEntrada.close();									// Cerrar el Archivo 
}
//
void Perdedor()
{
	string nombreArchivo = "F:\\Imagen\\Perdedor.txt";		// Dormir el proceso en 200 Milisegundos
	ifstream flujoEntrada;									// Ubicacion de los Archivos
	flujoEntrada.open(nombreArchivo.c_str());				// Abrir Datos
	string linea;											// Variable de Lectura
	Sleep(500);												// Dormir el proceso en 500 Milisegundos
	int i=0;												// Contador
	Voces13();
	while(getline(flujoEntrada,linea))						// Leer Flujo Datos del Archivo
	{
		gotoxy(3,3+i);										/*Llamado de Gotoxy(x,y)*/
		cout<<"\t\t\t"<<linea;
		Sleep(200);											// Dormir el proceso en 200 Milisegundos
		cout<<endl;
		i++;												// Contador Sumando
	}
	flujoEntrada.close();									// Cerrar el Archivo 
}
//
void Carga(){
	Voces1();
	for(int i=0;i<6;i++)
	{
		gotoxy(90,9+17);
		cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b      Cargando Datos del Juego        " << flush;
		Sleep(100);
		gotoxy(90,9+17);
		cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b    : Cargando Datos del Juego :      " << flush;
		Sleep(100);
		gotoxy(90,9+17);
		cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b   :: Cargando Datos del Juego ::     " << flush;
		Sleep(100);
		gotoxy(90,9+17);
		cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b  .:: Cargando Datos del Juego ::.    " << flush;
		Sleep(100);
		gotoxy(90,9+17);
		cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b ..:: Cargando Datos del Juego ::..   " << flush;
		Sleep(100);
	}
	Voces2();
	for(int i=0;i<6;i++)
	{
		gotoxy(90,9+17);
		cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b      Por Favor Espere Unos Minutos        " << flush;
		Sleep(100);
		gotoxy(90,9+17);
		cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b    : Por Favor Espere Unos Minutos :      " << flush;
		Sleep(100);
		gotoxy(90,9+17);
		cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b   :: Por Favor Espere Unos Minutos ::     " << flush;
		Sleep(100);
		gotoxy(90,9+17);
		cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b  .:: Por Favor Espere Unos Minutos ::.    " << flush;
		Sleep(100);
		gotoxy(90,9+17);
		cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b ..:: Por Favor Espere Unos Minutos::..   " << flush;
		Sleep(100);
	}
	Voces3();
	for(int i=0;i<6;i++)
	{
		gotoxy(90,9+17);
		cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b      Presione Cualquier Tecla             " << flush;
		Sleep(100);
		gotoxy(90,9+17);
		cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b    : Presione Cualquier Tecla :           " << flush;
		Sleep(100);
		gotoxy(90,9+17);
		cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b   :: Presione Cualquier Tecla ::          " << flush;
		Sleep(100);
		gotoxy(90,9+17);
		cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b  .:: Presione Cualquier Tecla ::.         " << flush;
		Sleep(100);
		gotoxy(90,9+17);
		cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b ..:: Presione Cualquier Tecla ::..        " << flush;
		Sleep(100);
	}
	
	cout<<endl<<endl<<endl;
}
#endif
