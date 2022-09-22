#include "barreronde.h"
#include <cmath>
#include <iostream>

using namespace std;


barreronde::barreronde(string _nom, const unsigned int _longueur, const double _densite, const float _diametre):
    Barre(_nom,_longueur,_densite),
    diametre(_diametre)
{
    cout << "Constructeur de la classe Barre Ronde" << endl << endl;
}
void barreronde::AfficherCaracteristiques()
{
    cout << endl;
    cout << "Reference =" << nom << endl;
    cout << "Densité =" << densite << "Kg/m3" << endl;
    cout << "Longueur =" << longueur/1000 << "m" << endl;
    cout << "Diamètre de la barre = " << diametre << "mm" << endl;
    cout << "Sections du rond = " << barreronde::CalculerSections() << "mm2" << endl;
    cout << endl;
}
barreronde::~barreronde()
{
    {
        cout << "Destructeur de la classe Barre Ronde" << endl << endl;
    }
}
float barreronde::CalculerSections()
{
    return M_PI*pow(diametre,2)/4;
}
float barreronde::CalculerMasse()
{
    return (longueur/1000) * (barreronde::CalculerSections()/1000000) * densite;
}
