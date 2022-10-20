#ifndef MAGASIN_H
#define MAGASIN_H

#include "alveoleslibres.h"
#include "stock.h"
#include "rouleau.h"
#include "charriot.h"

#define NB_RANGEES 2
#define NB_COLONNES 5

class Magasin
{
private:
    AlveolesLibres lesAlveolesLibres;
    stock leStock;
    Chariot leChariot;

public:
    Magasin();
    void EntrerRouleau();
    void SortirRouleau();
    void Visualiser();

};

#endif // MAGASIN_H
