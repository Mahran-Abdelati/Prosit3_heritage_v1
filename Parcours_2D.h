#pragma once
#include "Parcours.h"

class Parcours_2D : public Parcours
{
public :
	Parcours_2D();
	Parcours_2D(int x);
	void ajouterPoint(CLpoint);
	void calculDistance();
	void message();
};

