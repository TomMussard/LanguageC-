#include "barrecarre.h"
#include <iostream>

barrecarre::barrecarre(string _nom, const unsigned int _longueur, const double _densite, const int coter):
    Barre(_nom,_longueur,_densite),
    coter(coter)
{
    cout << "Constructeur de la classe Barre Carrée" << endl << endl;
}
void barrecarre::AfficherCaracteristiques()
{
    cout << endl;
    cout << "Reference =" << nom << endl;
    cout << "Densité =" << densite << "Kg/m3" << endl;
    cout << "Longueur =" << longueur/1000 << "m" << endl;
    cout << "Longueur du coter = " << coter << "mm" << endl;
    cout << "Sections du carre = " << barrecarre::CalculerSections() << "mm2" << endl;
    cout << endl;
}
barrecarre::~barrecarre()
{
    cout << "Destructeur de la classe Barre Carrée" << endl << endl;
}
float barrecarre::CalculerSections()
{
    return coter * coter;
}
float barrecarre::CalculerMasse()
{
    return (longueur/1000) * (barrecarre::CalculerSections()/1000000) * densite;
}
