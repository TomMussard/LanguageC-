#include "tableau.h"
#include <iostream>
#include <stdlib.h>

Tableau::Tableau(int _taille):
    taille(_taille)
{
    if(taille <= 0)
    {
        ptr = nullptr;
        ErreurCreation excep(CREATION,"taille incorrecte lors de la création du tableau");
        throw (excep);
    }
    ptr = new int[taille];
}


Tableau::~Tableau()
{
    if(ptr != nullptr)
        delete[] ptr;
}
