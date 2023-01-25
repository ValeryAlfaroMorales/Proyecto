#include "Carta.h"
int Carta::getValor() {
    return valor;
}
int Carta::getPalo() {
    return palo;
}
bool Carta::getBocaAbajo() {
    return bocaAbajo;
}
void Carta::setValor(int valor) {
    valor = valor;
}
void Carta::setPalo(int palo) {
    palo = palo;
}
void Carta::setBocaAbajo(bool bocaAbajo) {
    bocaAbajo = bocaAbajo;
}
void Carta::voltear() {
    if(bocaAbajo == false) {
        bocaAbajo = true;
    }
    else 
    {
        bocaAbajo = false;
    }
}

