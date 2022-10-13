#include "alveoleslibres.h"
#include "menu.h"
#include <iostream>

using namespace std;


enum CHOIX_MENU
{
    RESERVER = 1,
    LIBERER,
    VISUALISER,
    QUITTER
};

int main()
{
    int choix;
    int val1;
    int val2;
    AlveolesLibres lesAlveoleslibres(2,5);
    Menu leMenu("../Magasin_Rouleaux/alveoles.txt");
    do
    {
        choix = leMenu.Afficher();
        switch (choix)
        {
        case RESERVER:
            cout << "Entrer la rangée : ";
            cin >> val1;
            cout << "Entrer la colonne : ";
            cin >> val2;
            cout << "Vous avez reservé une alvéole" << endl;
            lesAlveoleslibres.Reserver(val1, val2);
            Menu::AttendreAppuiTouche();
            break;
        case LIBERER:
            cout << "Entrer la rangée : ";
            cin >> val1;
            cout << "Entrer la colonne : ";
            cin >> val2;
            lesAlveoleslibres.Liberer(val1, val2);
            Menu::AttendreAppuiTouche();
            break;

        case VISUALISER:
            cout << "Vous avez visualisez les alvéoles" << endl;
            lesAlveoleslibres.Visualiser();
            Menu::AttendreAppuiTouche();
            break;

        }

    } while(choix != QUITTER);
    return 0;
}
