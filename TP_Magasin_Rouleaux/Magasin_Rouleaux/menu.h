#ifndef MENU_H
#define MENU_H
#include <string>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

class Menu
{
public:
    Menu(const std::string &_nom);
    ~Menu();
    int Afficher();
    static void AttendreAppuiTouche();

private:

    string nom;
    int longueurMax;
    int nbOptions;
    string *options;
};

class Exception
{
public:
    Exception(int _code, std::string _message);
    int ObtenirCodeErreur() const;
    std::string ObtenirMessage() const;

private:
    int code;
    std::string message;
};

#endif // MENU_H
