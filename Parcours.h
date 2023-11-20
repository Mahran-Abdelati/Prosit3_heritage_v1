#pragma once
#include "CLpoint.h"

class Parcours
{
protected :
	CLpoint list_point[];
public :
	virtual void ajouterPoint(CLpoint) = 0;
	virtual void calculDistance() = 0;
	virtual void message() = 0;
};

