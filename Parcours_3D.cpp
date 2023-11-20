#include "Parcours_3D.h"
#include "Parcours.h"
#include<iostream>

using namespace std;

Parcours_3D::Parcours_3D()
{
	this->list_point[1];
}

Parcours_3D::Parcours_3D(int x)
{
	this->list_point[x];
	cout << "Ceation d'un parcours 3D" << endl;
}

void Parcours_3D::ajouterPoint(CLpoint)
{
	cout << "Ajout du point dans le parcours 3D" << endl;
}

void Parcours_3D::calculDistance()
{
	cout << "Calcul de la distance entre les point dans le parcours 3D" << endl;
}

void Parcours_3D::message()
{
	cout << "Voici le parcours 3D : " << endl;
}