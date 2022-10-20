#include "rouleau.h"

Rouleau::Rouleau()
{

}

Rouleau::Rouleau(const string _reference, const int _diametre):
    reference(_reference),
    diametre(_diametre)
{

}

void Rouleau::AffecterAlveole(const int _rangee, const int _colonne)
{
    rangee = _rangee;
    colonne = _colonne;
}

void Rouleau::ObtenirLocalisation(int &_rangee, int &_colonne) const
{
    _rangee = rangee;
    _colonne = colonne;
}

bool Rouleau::operator <(Rouleau _autreRouleau) const
{
    return diametre < _autreRouleau.diametre;
}

int Rouleau::operator -(Rouleau _autreRouleau) const
{
  return diametre - _autreRouleau.diametre;
}

void Rouleau::Visualiser() const
{
    cout << "Rouleau référence : " << reference << " Diamètre : " << diametre << endl;
    cout << "Dans magasin en " << rangee << " - " << colonne <<endl;
}
