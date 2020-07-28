#ifndef HORAINICIAL_H
#define HORAINICIAL_H
#include <iostream>
#include <iomanip>
#include <ctime>
#include <sstream>

#include <cstring>
#include <cstdlib>
#include "Gotoxy.h"
///Encargada de Ver el Tiempo y El Record
//Tiempo Inicial del Juego
void HoraI(int &h1,int &h2,int &h3)
{
	auto t = time(nullptr);				//Saca el Tiempo de la Computadora
	auto tm = *localtime(&t);			//Obtiene los datos de Tiempo
	
	ostringstream hora;					//Variable Tipo String Hora
	hora << put_time(&tm, "%H");		//Obtiene Datos de la Hora	
	auto c_hora = hora.str();			//Variable donde hay Espacio de Nombre de Datos
	
	ostringstream minutos;				//Variable Tipo String Minutos
	minutos << put_time(&tm, "%M");		//Obtiene Datos de los Minutos	
	auto c_minutos = minutos.str();		//Variable donde hay Espacio de Nombre de Datos
	
	ostringstream segundos;				//Variable Tipo String Segundos
	segundos << put_time(&tm, "%S");	//Obtiene Datos de los Segundos	
	auto c_segundos = segundos.str();	//Variable donde hay Espacio de Nombre de Datos
	
	//Tiempo Inical de Cuando Inicia El Juego
	h1 = stoi(c_hora, nullptr);			//Transformación de Tipo String a Int Hora
	h2 = stoi(c_minutos, nullptr);		//Transformación de Tipo String a Int Minutos
	h3 = stoi(c_segundos, nullptr);		//Transformación de Tipo String a Int Minutos
}
//Tiempo Final del Juego
void HoraF(int &h4,int &h5,int &h6)
{
	auto t = time(nullptr);				//Saca el Tiempo de la Computadora
	auto tm = *localtime(&t);			//Obtiene los datos de Tiempo
	
	ostringstream hora;					//Variable Tipo String Hora
	hora << put_time(&tm, "%H");		//Obtiene Datos de la Hora	
	auto c_hora = hora.str();			//Variable donde hay Espacio de Nombre de Datos
	
	ostringstream minutos;				//Variable Tipo String Minutos
	minutos << put_time(&tm, "%M");		//Obtiene Datos de los Minutos	
	auto c_minutos = minutos.str();		//Variable donde hay Espacio de Nombre de Datos
	
	ostringstream segundos;				//Variable Tipo String Segundos
	segundos << put_time(&tm, "%S");	//Obtiene Datos de los Segundos	
	auto c_segundos = segundos.str();	//Variable donde hay Espacio de Nombre de Datos
	
	//Tiempo Final de Cuando Inicia El Juego
	h4 = stoi(c_hora, nullptr);			//Transformación de Tipo String a Int Hora
	h5 = stoi(c_minutos, nullptr);		//Transformación de Tipo String a Int Minutos
	h6 = stoi(c_segundos, nullptr);		//Transformación de Tipo String a Int Segundos
}

//Record de los Jugadores
void Record(int &h1,int &h2,int &h3,int &h4,int &h5,int &h6,Personaje ElPersonaje[])
{
	if((h5-h2)==0)						//Minutos Igual a Cero 
	{
		if(h6-h3<0)						//Segundos Incial Negativos
		{
			gotoxy(15,15);
			cout<<" > EL Jugador : "<<ElPersonaje[1].Nombre<<endl;
			gotoxy(18,16);
			cout<<"\t > Su Tiempo es de ["<<-(h6-h3)<<"] Segundos"<<endl;
			gotoxy(18,17);
			cout<<"\t > Vida Final  : "<<ElPersonaje[1].Vida<<endl;
			gotoxy(18,18);
			cout<<"\t > Experiencia : "<<ElPersonaje[1].Score<<endl;
		}else{
			gotoxy(15,15);
			cout<<" > EL Jugador : "<<ElPersonaje[1].Nombre<<endl;
			gotoxy(18,16);
			cout<<"\t > Su Tiempo es de ["<<h6-h3<<"] Segundos"<<endl;
			gotoxy(18,17);
			cout<<"\t > Vida Final  : "<<ElPersonaje[1].Vida<<endl;
			gotoxy(18,18);
			cout<<"\t > Experiencia : "<<ElPersonaje[1].Score<<endl;
		}
	}else{
		if(h6-h3<0)						//Segundos Incial Negativos
		{
			gotoxy(15,15);
			cout<<" > EL Jugador : "<<ElPersonaje[1].Nombre<<endl;
			gotoxy(18,16);
			cout<<"\t > Su Tiempo es de ["<<h5-h2<<" . "<<-(h6-h3)<<"]"<<endl;
			gotoxy(18,17);
			cout<<"\t > Vida Final  : "<<ElPersonaje[1].Vida<<endl;
			gotoxy(18,18);
			cout<<"\t > Experiencia : "<<ElPersonaje[1].Score<<endl;
		}else{
			gotoxy(15,15);
			cout<<" > EL Jugador : "<<ElPersonaje[1].Nombre<<endl;
			gotoxy(18,16);
			cout<<"\t > Su Tiempo es de ["<<h5-h2<<" . "<<h6-h3<<"] Minutos"<<endl;
			gotoxy(18,17);
			cout<<"\t > Vida Final  : "<<ElPersonaje[1].Vida<<endl;
			gotoxy(18,18);
			cout<<"\t > Experiencia : "<<ElPersonaje[1].Score<<endl;
		}
	}
	
}
#endif
