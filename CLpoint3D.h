#pragma once
#include "CLpoint.h"

class CLpoint3D : public CLpoint
{
public :
	CLpoint3D(void);
	CLpoint3D(int x, int y, int z);
	void deplacerPoint3D(int x, int y, int z);
};