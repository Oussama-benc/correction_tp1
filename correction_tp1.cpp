// correction_tp1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Cercle.h"
#include "Point.h"
using namespace std;

int main()
{
   
    Point p1(2.5, 3.8);
    Cercle c1(p1, 1);
    p1.Affichage();
    cout << "la surface est :" << c1.surface() << endl;
    cout << " le perimetre est :" << c1.perimetre() << endl;

    Point p2(3, 4);
    Cercle c2(p2, 0.5);

    if (c1.egalite(c2)) 
    {
        cout << "On a l'egalite dans les deux cercle " << endl;
    }
    else 
    {
        cout << " On n'a pad de l'egalite dans les deux cercles " << endl;
    }

    if (c1.appartenance(p2))
    {
        cout << "le point  convenir au cercle" << endl;
    }
    else 
    {
        cout << "le point n'convenir pas au cercle" << endl;

    }

    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
