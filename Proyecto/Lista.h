#pragma once
#include "Nodo.h"
#include <iostream> 
#include <sstream> 
#include <string> 
class Lista
{
private:
	Nodo* inicio;
public:
	Lista(Nodo* = nullptr);
	Nodo* getInicio();
	void setInicio(Nodo*);
	bool insertar(Nodo*);
	void borrar(Nodo*);
	bool listaVacia();
	~Lista();
};

