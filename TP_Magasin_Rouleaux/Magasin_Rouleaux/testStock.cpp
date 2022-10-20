//#include "alveoleslibres.h"
//#include "menu.h"
//#include "rouleau.h"
//#include "stock.h"
//#include <iostream>

//using namespace std;

//enum CHOIX_MENU
//{
//    AJOUTER_ROULEAU = 1,
//    RECHERCHER_ROULEAU,
//    VISUALISER,
//    QUITTER
//};

//int main()
//{
//    try{
//        Menu leMenu("../Magasin_Rouleaux/stock.txt");

//        int choix;
//        string reference;
//        int diametre;
//        Rouleau  *nouvRouleau;
//        stock leStock;
//        int nbRouleaux = 0;
//        positionStock posDebut;
//        positionStock memoDebut;
//        char rep;

//        do
//        {
//            choix = leMenu.Afficher();
//            switch (choix)
//            {
//            case AJOUTER_ROULEAU:
//                system("clear");
//                cout << "Indiquer les caractéristique du rouleau à ajouter" << endl;
//                cout << "Reference du rouleau: ";
//                cin >> reference;
//                cout << "Diametre du rouleau: ";
//                cin >> diametre;
//                nouvRouleau = new Rouleau(reference, diametre);
//                leStock.AjouterRouleau(*nouvRouleau);
//                Menu::AttendreAppuiTouche();
//                break;


//            case RECHERCHER_ROULEAU:
//                system("clear");
//                nbRouleaux = leStock.RechercherSerie(posDebut);
//                memoDebut = posDebut;

//                cout << "Nombre de rouleaux retenu :" << nbRouleaux << endl;
//                for (int indice = 0; indice < nbRouleaux; indice++)
//                {
//                    posDebut->Visualiser();
//                    posDebut++;
//                }
//                if(nbRouleaux > 0)
//                {
//                    cout << "Voulez-vous sortir de la serie de rouleau du stock O(o)/N(n) , ";
//                    cin >> rep;
//                    if(rep == '0' || rep == 'o')
//                    {
//                        for(int indice = 0; indice < nbRouleaux && memoDebut != leStock.end(); indice++)
//                        {
//                            leStock.SortirRouleau(memoDebut++);
//                        }
//                    }
//                }
//                Menu::AttendreAppuiTouche();
//                break;

//            case VISUALISER:
//                system("clear");
//                cout << endl << "Affichage des rouleaux" << endl;
//                leStock.Visualiser();
//                Menu::AttendreAppuiTouche();
//                break;

//            }
//        }while(choix != QUITTER);
//    }catch(std::runtime_error &e){
//        cout << e.what() << endl;
//        exit(EXIT_FAILURE);
//    }

//    return 0;
//}




