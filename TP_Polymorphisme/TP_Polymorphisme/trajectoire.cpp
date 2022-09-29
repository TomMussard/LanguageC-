#include "trajectoire.h"
#include <iostream>
#include <iomanip>

using namespace std;

Trajectoire::Trajectoire(const int _nbEtapesMaxi):
    nbEtapesMaxi(_nbEtapesMaxi)
{
    diffElements = new Element *[nbEtapesMaxi];
    prochaineEtape = 0;
}
Trajectoire::~Trajectoire()
{
    for(int indice = 0 ; indice < prochaineEtape ; indice++)
        delete diffElements[indice];
    delete [] diffElements;
}

bool Trajectoire::Ajouter(Element *_pElement)
{
    bool retour = true;
    if (prochaineEtape < nbEtapesMaxi) {

        diffElements[prochaineEtape++] = _pElement;
    }
    else
    {
        retour = false;
    }
    return retour;

}
void Trajectoire::Afficher()
{
    cout <<"Trajectoire :" << endl;
    cout << endl;

    for (int indice = 0; indice < nbEtapesMaxi; indice++)
    {
        diffElements[indice]->Afficher();
    }
    cout << endl;
}
