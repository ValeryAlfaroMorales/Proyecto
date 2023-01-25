#include "JugadorGenerico.h"
JugadorGenerico::JugadorGenerico(string nickname, Mano* mano) {
    nickname = nickname;
    mano = mano;
}
JugadorGenerico::JugadorGenerico()
{
    nickname = "";
    mano = nullptr;
};
Mano* JugadorGenerico::getMano()
{
    return this->mano;
}

void JugadorGenerico::setMano(Mano* mano)
{
    this->mano = mano;
}
string JugadorGenerico::getNickname() 
{
    return nickname;
}
void JugadorGenerico::setNickname(string nickname) 
{
    nickname = nickname;
}