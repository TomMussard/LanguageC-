#include "alveoleslibres.h"
#include <iostream>

AlveolesLibres::AlveolesLibres(const int _nbRangees, const int _nbColonnes):
    nbRangees(_nbRangees),
    nbColonnes(_nbColonnes)
{
    int taille = nbRangees * nbColonnes;
    reserve(taille);
    for (int numAlveole = 1; numAlveole <=taille; numAlveole++)
        push_back(numAlveole);
}

bool AlveolesLibres::Reserver(int &rangee, int &colonne)
{
    int numAlveole;
    bool alveoleLibre = false;

    if(!empty())
    {
        numAlveole = back(); //on recupere le sommet de la pile
        pop_back();          // on retire un élement au sommet de la pile


        //Calcul de la position de l'élément
        rangee = ((numAlveole-1)/nbColonnes)+1;
        colonne = ((numAlveole-1)%nbColonnes)+1;

        alveoleLibre = true;

    }
    return alveoleLibre; //alveole libre est vrai si la reservation est possible dans le cas ou il y a plus d'emplacement libre alveolibre est faux
}

bool AlveolesLibres::Liberer(const int _rangee, const int _colonne)
{
    int numAlveole;

    if(size()<capacity())
    {
        numAlveole= (_rangee-1) * nbColonnes + _colonne;
        push_back(numAlveole);
        cout << "Vous avez libéré des alvéoles" << endl;
    }
    else
    {
        cout << "Impossible de libérer une alvéoles de plus" << endl;
    }
}

void AlveolesLibres::Visualiser()
{
    vector<int> :: iterator it;
    if(!empty())
    {
        for(it=begin(); it!=end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "Tous les emplacments sont réserver" << endl;
    }
}


// 1 2 3 4 5
// 6 7 8 9 10
