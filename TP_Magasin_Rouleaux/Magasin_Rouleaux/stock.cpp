#include "stock.h"

stock::stock()
{

}

void stock::AjouterRouleau(const Rouleau &_nouveauRouleau)
{
    insert(_nouveauRouleau);
}

unsigned int stock::RechercherSerie(positionStock &it)
{
    unsigned int retour = 0;
    if(size() < 6){
        retour = size();
        it = begin();
    }
    else {
        retour = 6;
        it = begin();
    }
    return retour;
}


void stock::Visualiser() const
{
    positionStock it;
    int nb = {0};
    for (it = begin(); it != end(); it++){
        it->Visualiser();
        nb++;
    }
    if (nb == 0)
        cout << "Le magasin est vide" << endl;
}

void stock::SortirRouleau(positionStock &it)
{
    erase(it);
}
