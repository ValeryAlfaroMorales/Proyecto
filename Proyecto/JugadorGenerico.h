#pragma once
#include"Mano.h"
#include"Carta.h"
#include <iostream> 
#include <sstream> 
#include <string> 
using namespace std;
class JugadorGenerico
{
protected:
	string nickname;
	Mano* mano;
public:
	JugadorGenerico();
	JugadorGenerico(string, Mano*);
	string getNickname();
	Mano* getMano();
	void setNickname(string);
	void setMano(Mano*);
	~JugadorGenerico();
	Carta* pedirCarta();
	bool sePaso();
};

