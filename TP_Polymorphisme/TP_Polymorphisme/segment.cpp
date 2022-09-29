#include "segment.h"
#include "trajectoire.h"
#include <iomanip>
#include <iostream>

using namespace std;

Segment::Segment(const int numero, const double _longueur, const double _angle, const int _vitesse):
    Element(numero,_vitesse),
    longueur(_longueur),
    angle(_angle)
{

}

void Segment::Afficher()
{
    cout << "(" << numero << ")" << " SEGMENT L = " << setw(10) << left << longueur << "A =" << setw(10) << left << angle << " V =" << vitesse << endl;
}
