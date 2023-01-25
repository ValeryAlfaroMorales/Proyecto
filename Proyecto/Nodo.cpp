#include "Nodo.h"
Nodo::Nodo(JugadorGenerico* dato, Nodo* next)
{
    this->dato = dato;
    this->next = next;
}

JugadorGenerico* Nodo::getDato() 
{
    return this->dato;
}

void Nodo::setDato(JugadorGenerico* dato)
{
    this->dato = dato;
}

Nodo* Nodo::getNext()
{
    return this->next;
}

void Nodo::setNext(Nodo* next)
{
    this->next = next;
}

Nodo::~Nodo()
{
    if (dato != nullptr) delete dato;
}

