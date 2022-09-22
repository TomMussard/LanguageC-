#ifndef BARRECARRE_H
#define BARRECARRE_H
#include <iostream>
#include <string>
#include "barre.h"

using namespace std;

class barrecarre : public Barre
{
public:
    barrecarre(string _nom, const unsigned int _longueur, const double _densite, const int coter);
    ~barrecarre();

    void AfficherCaracteristiques();

    float CalculerSections();
    float CalculerMasse();

private:
    int coter;
};

#endif // BARRECARRE_H
