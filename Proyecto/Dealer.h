#pragma once
#include"JugadorGenerico.h"
#include"Carta.h"
#include <iostream> 
#include <sstream> 
#include <string> 
class Dealer: public JugadorGenerico
{
public:
	Dealer();
	Dealer(string, Mano*);
	Carta* pedirCarta();
	void volteaCarta();
	~Dealer();
};

