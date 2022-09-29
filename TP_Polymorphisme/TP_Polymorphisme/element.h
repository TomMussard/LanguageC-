// Réponse Questions 1: La relation entre la classe Trajectoire et la
//classe Element, c'est une relation de composition


// Réponse Questions 2: La classe Trajectoire contient physiquement des instance
// de la classe Element, grace au losange noir present devant Trajectoire

#ifndef ELEMENT_H
#define ELEMENT_H

#include <string>

using namespace std;


class Element
{

public:

    Element(const int _numero, const double _vitesse);
    virtual ~Element();
    virtual void Afficher()=0;

    //Methode Getter Setter
    int getNumero() const;
    void setNumero(const int newNumero);

    double getVitesse() const;
    void setVitesse(const double newVitesse);

protected:

    int numero = 0;
    double vitesse = 1;
};

#endif // ELEMENT_H
