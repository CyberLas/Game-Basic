#ifndef MATAR_H
#define MATAR_H
#include <ctime>
#include <cstdlib>
#include "Gotoxy.h"
using namespace std;

int z=2;

void Datos(Personaje ElPersonaje[],int y){
	int w = 1+rand()%3;
	if(w==1)
	{
		Voces11();
		gotoxy(10,24);
		cout<<"\t > Datos del Jugador : "<<endl;
		gotoxy(10,25);
		cout<<"\t   [*] Vida del Personaje   : "<<ElPersonaje[y].Vida+5<<endl;
		gotoxy(10,26);
		ElPersonaje[y].Score*=77;
		cout<<"\t   [*] Puntuación del Personaje : "<<ElPersonaje[y].Score<<endl;
	}
	if(w==2)
	{
		Voces11();
		gotoxy(10,24);
		cout<<"\t > Datos del Jugador : "<<endl;
		gotoxy(10,25);
		cout<<"\t   [*] Vida del Personaje   : "<<ElPersonaje[y].Vida+7<<endl;
		gotoxy(10,26);
		ElPersonaje[y].Score*=22;
		cout<<"\t   [*] Puntuación del Personaje : "<<ElPersonaje[y].Score<<endl;
	}
	if(w==3)
	{
		Voces11();
		gotoxy(10,24);
		cout<<"\t > Datos del Jugador : "<<endl;
		gotoxy(10,25);
		cout<<"\t   [*] Vida del Personaje   : "<<ElPersonaje[y].Vida+9<<endl;
		gotoxy(10,26);
		ElPersonaje[y].Score*=55;
		cout<<"\t   [*] Puntuación del Personaje : "<<ElPersonaje[y].Score<<endl;
	}
	gotoxy(40,28);
	system("pause");
}
	
void Ataque(Arbol & ABB, Personaje ElPersonaje[],int y)
{
	srand(time(0));
	while(ABB->Num != 0)
	{
		int Atk = 5+rand()%21;
		if(ElPersonaje[y].Vida <= 0)
		{
			break;
		}
		if(Atk>=ABB->Num)
		{
			gotoxy(10,z+1);
			cout<<"\t --> Vida Del Moustro : "<<ABB->Num<<" <--"<<endl;
			gotoxy(10,z+2);
			cout<<"\t "<<ElPersonaje[y].Nombre<<" atacó al monstruo con : "<<Atk<<" de poder habilidad"<<endl;
			gotoxy(10,z+3);
			cout<<"\t --> [ Monstruo Derrotado ] <--"<<endl;
			Datos(ElPersonaje,y);
			ABB->Num=0;
			z+=4;
		}else{
			gotoxy(10,z+1);
			cout<<"\t --> Vida Del Moustro : "<<ABB->Num<<" <--"<<endl;
			gotoxy(10,z+2);
			cout<<"\t "<<ElPersonaje[y].Nombre<<" atacó al monstruo con : "<<Atk<<" de poder habilidad"<<endl;
			ABB->Num=(ABB->Num-Atk);
			gotoxy(10,z+3);
			cout<<"\t Vida Actual de Monstruo : "<<ABB->Num<<endl;
			ElPersonaje[y].Vida-=Atk;
			if(Atk >= ElPersonaje[y].Vida)
			{
				ElPersonaje[y].Vida=0;
				ElPersonaje[y].Est = 0;
			}
			z+=4;
		}
	}
	z=5;
}

#endif
