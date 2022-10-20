#include "stock.h"
#include <iostream>
stock::stock()
{

}

void stock::AjouterRouleau(const Rouleau &_nouveauRouleau)
{
    insert(_nouveauRouleau);
}

int stock::RechercherSerie(positionStock &_positionDebut)
{

    int nbRouleau = (int) size();
    positionStock positionPremier = begin();
    _positionDebut = positionPremier;
    if(nbRouleau > 6)
    {
        nbRouleau = 6;
        positionStock positionDernier = begin();

        for (int indice = 1; indice < 6; indice++)
            positionDernier++;

        int valeurRetenue = *positionDernier - *positionPremier;
        while(positionDernier != end())
        {
            if(valeurRetenue > (*positionDernier - *positionPremier))
            {
                _positionDebut = positionPremier;
                valeurRetenue = *positionDernier - *positionPremier;
            }
            positionDernier++;
            positionPremier++;
            }
    }
    return nbRouleau;
}


void stock::Visualiser() const


{
    positionStock it;
    int nb = {0};  //nombre rouleau en magasin

    for (it = begin(); it != end(); it++){
        it->Visualiser();
        nb++;
    }
    if (nb == 0)
        cout << "Le magasin est vide" << endl;
}


bool stock::SortirRouleau(const positionStock &_positionRouleau)
{
    bool rouleauSuppr =false;
    if(_positionRouleau !=end())
    {
        rouleauSuppr =true;
        erase(_positionRouleau);
    }
    return rouleauSuppr;
}
