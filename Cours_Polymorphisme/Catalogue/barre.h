#ifndef BARRE_H
#define BARRE_H
#include <string>

using namespace std;

class Barre
{
public:
    Barre(string _nom,const float _densite, const int _longueur);

    virtual ~Barre();
    virtual void AfficherCaracteristiques();
    virtual float CalculerMasse() {return 0;}

protected:
    int longueur;
    double densite;
    string nom;

};
#endif // BARRE_H
