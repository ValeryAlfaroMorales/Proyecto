#include "Mano.h"
int Mano::getPuntos()
{
    return puntos;
}
void Mano::setPuntos(int puntos)
{
    puntos = puntos;
}
bool Mano::agregarCarta(Carta* carta)
{
    if (estaVacia()) {


        inicio = new Nodo(estudiante, nullptr);
        return true;
    }
    else {
        NodoEstudiante* actual = head;
        while (actual->getNext() != nullptr) {
            actual = actual->getNext();
        }
        actual->setNext(new NodoEstudiante(estudiante, nullptr));
        return true;
    }
    return false;
}