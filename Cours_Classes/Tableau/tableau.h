#ifndef TABLEAU_H
#define TABLEAU_H
#include <iostream>

class Tableau
{
private:
int *ptr;
int taille;
public:
Tableau(int _taille);
~Tableau();
void Affecter(int _indice, int _valeur);
int &operator[](int _indice);
};

class ErreurCreation
{
private:
int codeErreur;
std::string message;
public:
ErreurCreation(int _codeErreur,
std::string _message);
int ObtenirCodeErreur() const;
std::string ObtenirDescription() const;
};

class ErreurIndice
{
private:
int codeErreur;
std::string message;
public:
ErreurIndice(int _codeErreur,
std::string _message);
int ObtenirCodeErreur() const;
std::string ObtenirDescription() const;
};

enum erreurs
{
CREATION,
INDICE
};

#endif // TABLEAU_H
