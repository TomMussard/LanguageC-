#include "alveoleslibres.h"
#include "magasin.h"
#include "menu.h"
#include "rouleau.h"
#include "stock.h"
#include <iostream>

using namespace std;

enum CHOIX_MENU
{
    ENTRER_ROULEAU = 1,
    SORTIR_SERIE,
    VISUALISER,
    QUITTER,
};

int main()
{
    cout << "Gestion du magasin" << endl << endl;

    try {

        Menu leMenuMagasin("../Magasin_Rouleaux/magasin.txt");
        Magasin leMagasin;

        int choix;

        do {
            choix = leMenuMagasin.Afficher();
            switch (choix)
            {
            case ENTRER_ROULEAU:
                cout << endl;
                leMagasin.EntrerRouleau();
                Menu::AttendreAppuiTouche();
                break;

            case SORTIR_SERIE:
                cout << endl;
                leMagasin.SortirRouleau();
                Menu::AttendreAppuiTouche();
                break;

            case VISUALISER:
                cout << endl;
                leMagasin.Visualiser();
                Menu::AttendreAppuiTouche();
                break;
            }
        }while(choix != QUITTER);
    }catch(std::runtime_error &e){
        cout << e.what() << endl;
        exit(EXIT_FAILURE);
    }
    return 0;
}
