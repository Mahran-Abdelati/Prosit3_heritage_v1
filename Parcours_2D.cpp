#include "Parcours_2D.h"
#include "Parcours.h"
#include<iostream>

using namespace std;

Parcours_2D::Parcours_2D()
{
	this->list_point[1];
}

Parcours_2D::Parcours_2D(int x)
{
	this->list_point[x];
	cout << "Ceation d'un parcours 2D" << endl;
}

void Parcours_2D::ajouterPoint(CLpoint)
{
	cout << "Ajout du point dans le parcours 2D" << endl;
}

void Parcours_2D::calculDistance()
{
	cout << "Calcul de la distance entre les point dans le parcours 2D" << endl;
}

void Parcours_2D::message()
{
	cout << "Voici le parcours 2D : " << endl;
}