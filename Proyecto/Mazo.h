#pragma once
#include "Carta.h"
#include <iostream> 
#include <sstream> 
#include <string> 
class Mazo
{
private:
	Carta* carta;
public:
	void inicializar();
	void barajar();
	Carta* tomarCarta();
};

