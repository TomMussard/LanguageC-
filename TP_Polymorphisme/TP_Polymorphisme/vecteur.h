#ifndef VECTEUR_H
#define VECTEUR_H
#include <string>

using namespace std;

class Vecteur
{
public:
    Vecteur(const double _x, const double _y);
    Vecteur operator +(const double _autre);
    Vecteur operator -(const double _autre);
    void Afficher();

    double getX() const;
    double setX(const double _x);

    double getY() const;
    double setY(const double _y);

protected:

};

#endif // VECTEUR_H
