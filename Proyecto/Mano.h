#pragma once
#include"Mazo.h"
#include "Carta.h"
#include <iostream> 
#include <sstream> 
#include <string> 
class Mano
{
private:
	Carta* cartas;
	int puntos;
public:
	Mano();
	~Mano();
	bool agregarCarta(Mazo*);
	void limpiar();
	int getPuntos();
	void setPuntos(int);

};

