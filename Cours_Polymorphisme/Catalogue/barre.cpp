#include "barre.h"
#include <iostream>
#include <string.h>

using namespace std;

Barre::Barre(string _nom, const float _densite, const int _longueur):
    longueur(_longueur),densite(_densite), nom(_nom)
{
    cout << "Constructeur de la classe Barre" << endl;
}
Barre::~Barre()
{
    cout << "Destructeur de la classe Barre" << endl;
}

void Barre::AfficherCaracteristiques()
{
    cout << endl;
    cout << "Nom :" << nom << endl;
    cout << "Masse Volumique :" << densite << endl;
    cout << "Longueur :" << longueur/1000 << "m" << endl;
    cout << endl;
}
