#ifndef TRAJECTOIRE_H
#define TRAJECTOIRE_H
#include "element.h"
#include <iostream>
#include <string>

using namespace std;

#include "element.h"


class Trajectoire
{
protected:

    int nbEtapesMaxi;
    int prochaineEtape;
    Element **diffElements;

public:
    Trajectoire(const int _nbEtapesMaxi);
    ~Trajectoire();
    bool Ajouter(Element *_pElement);    // pointeur vers elements
    void Afficher();
};

#endif // TRAJECTOIRE_H
