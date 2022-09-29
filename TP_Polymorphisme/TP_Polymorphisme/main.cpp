#include <iostream>
#include "element.h"
#include "trajectoire.h"
#include "segment.h"

using namespace std;

int main()
{
    Trajectoire parcours(2);

    Segment Segment1(1,9,0,3);
    Segment Segment2(2,5,0.927295,1);


    parcours.Ajouter(&Segment1);
    parcours.Ajouter(&Segment2);


    parcours.Afficher();

    cout << endl;
}
