#ifndef SEGMENT_H
#define SEGMENT_H

#include "element.h"

using namespace std;


class Segment : public Element
{
public:

    Segment(const int numero, const double _longueur, const double _angle, const int _vitesse);
    void Afficher();

protected:

    double longueur;
    double angle;

};

#endif // SEGMENT_H
