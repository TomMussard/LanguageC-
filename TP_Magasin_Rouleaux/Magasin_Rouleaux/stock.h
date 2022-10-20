#ifndef STOCK_H
#define STOCK_H
#include <iostream>
#include <set>
#include "rouleau.h"



typedef std::multiset<Rouleau>::iterator positionStock;

class stock : public std::multiset<Rouleau>
{
public:
    stock();
    void AjouterRouleau(const Rouleau &_nouveauRouleau);
    int RechercherSerie(positionStock &_positionDebut);
    bool SortirRouleau(const positionStock &_positionRouleau);

    void Visualiser() const;
};

#endif // STOCK_H
