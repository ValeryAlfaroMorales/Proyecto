#pragma once
#include "JugadorGenerico.h"
#include <iostream> 
#include <sstream> 
#include <string> 
class Nodo
{
private:
	JugadorGenerico* dato;
	Nodo* next;
public:
	Nodo(JugadorGenerico* = nullptr, Nodo* = nullptr);
	JugadorGenerico* getDato();
	void setDato(JugadorGenerico*);
	Nodo* getNext();
	void setNext(Nodo*);
	~Nodo();
};

