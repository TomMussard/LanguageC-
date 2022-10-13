#ifndef ROULEAU_H
#define ROULEAU_H
#include <string.h>
#include <string>

using namespace std;

class Rouleau
{
public:
    Rouleau();
    Rouleau(const string _reference, const int diametre);
    void AffecterAlveole(const int _rangee, const int _colonne);
    void ObtenirLocalisation();

private:

};

#endif // ROULEAU_H
