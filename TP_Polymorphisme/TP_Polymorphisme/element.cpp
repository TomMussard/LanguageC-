#include "element.h"
#include <iostream>

using namespace std;

Element::Element(const int _numero, const double _vitesse):
    numero(_numero),
    vitesse(_vitesse)
{

}

Element::~Element()
{

}

int Element::getNumero() const
{
    return numero;
}

void Element::setNumero(int newNumero)
{
    numero = newNumero;
}

double Element::getVitesse() const
{
    return vitesse;
}

void Element::setVitesse(const double newVitesse)
{
    vitesse = newVitesse;
}

void Element::Afficher()
{


}
