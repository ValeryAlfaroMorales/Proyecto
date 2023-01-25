#include "Jugador.h"
Jugador::Jugador(string nickname, Mano* mano) : JugadorGenerico(nickname, mano)
{
    nickname = nickname;
    mano = mano;
};
Jugador::Jugador()
{
    nickname = "";
    mano = nullptr;
};
