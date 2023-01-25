#pragma once
#include "Carta.h"
#include"JugadorGenerico.h"
#include <iostream> 
#include <sstream> 
#include <string> 
class Jugador : public JugadorGenerico
{
public:
	Jugador();
	Jugador(string, Mano*);
	~Jugador();
	Carta* pedirCarta();
};

