#pragma once
#include <iostream> 
#include <sstream> 
#include <string>
class Carta
{
private:
	int valor;
	int palo;
	bool bocaAbajo;
public:
	Carta();
	int getValor();
	int getPalo();
	bool getBocaAbajo();
	void setValor(int);
	void setPalo(int);
	void setBocaAbajo(bool);
	void voltear();
	~Carta();
};

