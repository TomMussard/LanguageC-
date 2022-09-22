#ifndef BARRERONDE_H
#define BARRERONDE_H
#include <iostream>
#include <string>

#include "barre.h"

using namespace std;


class barreronde : public Barre
{
public:
    barreronde(string _nom, const unsigned int _longueur, const double _densite, const float _diametre);
    ~barreronde();

       void AfficherCaracteristiques();

       float CalculerSections();
       float CalculerMasse();

   private:

       int diametre;
};

#endif // BARRERONDE_H
