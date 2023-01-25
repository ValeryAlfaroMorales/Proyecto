#include "Dealer.h"

Dealer::Dealer(string nickname, Mano* mano): JugadorGenerico(nickname,mano) 
{
    nickname = nickname;
    mano = mano;
};
Dealer::Dealer()
{
    nickname = "";
    mano = nullptr;
};