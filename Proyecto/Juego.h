#pragma once
#include "Lista.h"
#include"Mazo.h"
#include <iostream> 
#include <sstream> 
#include <string> 

class Juego
{
private:
	Lista* listaJugadores();
	Mazo baraja();
public:
	Juego();
	~Juego();
	void jugar();
};

