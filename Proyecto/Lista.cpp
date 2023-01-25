#include "Lista.h"
Lista::Lista(Nodo* inicio)
{
    this->inicio = inicio;
}

Nodo* Lista::getInicio()
{
    return this->inicio;
}

void Lista::setInicio(Nodo* Inicio)
{
    this->inicio= inicio;
}
bool Lista::listaVacia()
{
    return inicio == nullptr;
}
bool Lista::insertar(Nodo* nodo) {
    if (listaVacia()) {
        inicio = nodo;
        return true;
    }
    else {
        Nodo* actual = inicio;
        while (actual->getNext() != nullptr) {
            actual = actual->getNext();
        }
        actual->setNext(nodo);
        return true;
    }
    return false;
}

