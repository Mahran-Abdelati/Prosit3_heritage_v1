// Prosit3_heritage_v1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "CLpoint.h"
#include "CLpoint3D.h"
#include "Parcours_2D.h"
#include "Parcours_3D.h"


int main()
{
    std::cout << "Hello World!\n";
    CLpoint point1;
    CLpoint3D point2;

    point1.afficherCoordo();
    point2.afficherCoordo();

    Parcours_2D parcours1;
    parcours1.ajouterPoint(point1);
    parcours1.calculDistance();
    parcours1.message();

    Parcours_3D parcours2;
    parcours2.ajouterPoint(point2);
    parcours2.calculDistance();
    parcours2.message();
}