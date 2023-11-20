#pragma once
#include "Parcours.h"

class Parcours_3D : public Parcours
{
public:
	Parcours_3D();
	Parcours_3D(int x);
	void ajouterPoint(CLpoint);
	void calculDistance();
	void message();
};

