#include "magasin.h"

Magasin::Magasin():
    lesAlveolesLibres(NB_RANGEES, NB_COLONNES)
{

}

void Magasin::EntrerRouleau()
{
    string reference;
    int diametre;
    int laRangee;
    int laColonne;

    if(lesAlveolesLibres.Reserver(laRangee, laColonne))
    {
        cout << "Indiquer les caractéristique de rouleau à ajouter" << endl;
        cout << "Reference du rouleau : ";
        cin >> reference;
        cout << "Diametre du rouleau: ";
        cin >> diametre;
        Rouleau nouveau(reference, diametre);
        leStock.AjouterRouleau(nouveau);
        leChariot.DeplacerChariot(VERS_MAGASIN, laRangee, laColonne);
    }
    else
    {
        cout << "Il n'ya plus de place dans le magasin" << endl;
    }
}


void Magasin::SortirRouleau()
{
    positionStock posDebut;
    int laRangee;
    int laColonne;
    Rouleau courant;

    int nbRouleau = leStock.RechercherSerie(posDebut);
    if(nbRouleau > 0)
    {
        for(int indice=0 ; indice < nbRouleau ; indice++)
        {
            courant = *posDebut;
            courant.ObtenirLocalisation(laRangee,laColonne);
            lesAlveolesLibres.Liberer(laRangee,laColonne);
            leStock.SortirRouleau(posDebut++);
            leChariot.DeplacerChariot(VERS_ENCEINTE, laRangee, laColonne);
        }
    }
    else
    {
        cout << "Il n'y a plus de rouleau dans la magasin" << endl;
    }

}
void Magasin::Visualiser()
{
    cout << "Rouleaux dans le magasin :" << endl;
    if(!leStock.empty())
    {
        leStock.Visualiser();
    }
    else
    {
        cout << "Le stock est vide" << endl;
    }
    cout << "Numéro d'alvéoles disponibles :" << endl;
    if(!lesAlveolesLibres.empty())
    {
        lesAlveolesLibres.Visualiser();
    }
    else
    {
        cout << "Le magasin est complet" << endl;
    }
}
