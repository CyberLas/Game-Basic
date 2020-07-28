#ifndef MENU_H
#define MENU_H
#include "Estructura.h"
#include "Fullscreen.h"

#include "Marco.h"
#include "Letras.h"
#include "Gotoxy.h"
#include "Inicio.h"
#include "Juego.h"
#include "Mostrar.h"
#include "Movimientos.h"
#include "Verificar.h"
#include "HoraInicial.h"
#include "Jugar.h"
#include <Windows.h>
#include "Voces.h"
void Menu(){
	Arbol ABB=NULL;
	Arbol Temp=NULL;
	Personaje ElPersonaje[10];
	AltEnter();
	Marco();
	Titulo1();
	Carga();
	system("cls");
	int y=1,a=0,h1=0,h2=0,h3=0,h4=0,h5=0,h6=0;
	do{
		Voces5();
		Marco();
		Titulo2();
		Titulo3();
		gotoxy(50,28);
		cout<<"  >> ";
		cin>>a;
		switch(a){
		case 1:
			system("cls");
			Marco();
			Inicio(ElPersonaje);
			Juego(ABB,Temp);
			HoraI(h1,h2,h3);
			Jugar(ABB,Temp,ElPersonaje,y);
			HoraF(h4,h5,h6);
			break;
		case 2:
			system("cls");
			Marco();
			Voces15();
			Titulo8();
			if(ElPersonaje[1].Score!=1){
				Record(h1,h2,h3,h4,h5,h6,ElPersonaje);
			}
			gotoxy(40,28);
			system("pause");
			break;
		case 3:
			system("cls");
			Marco();
			Voces14();
			Sleep(900);
			a++;
			system("cls");
			break;
		default:
			system("cls");
			Marco();
			Titulo4();
			Sleep(900);
		}
		system("cls");
	}while(a!=4);
}
	
#endif
	
