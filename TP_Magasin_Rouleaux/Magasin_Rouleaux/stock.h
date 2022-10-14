#ifndef STOCK_H
#define STOCK_H
#include <iostream>
#include <set>
#include "rouleau.h"
#include "rouleau.h"


typedef std::multiset<Rouleau>::iterator positionStock;

class stock : public std::multiset<Rouleau>
{
public:
    stock();
    void AjouterRouleau(const Rouleau &_nouveauRouleau);
    unsigned int RechercherSerie(positionStock &it);
    void SortirRouleau(positionStock &it);
    void Visualiser() const;
};

#endif // STOCK_H
