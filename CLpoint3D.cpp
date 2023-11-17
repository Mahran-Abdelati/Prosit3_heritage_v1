#include "CLpoint3D.h"

CLpoint3D::CLpoint3D(void)
{
	set_x(0);
	set_y(0);
	this -> z = 0;
}

CLpoint3D::CLpoint3D(int x, int y, int z)
{
	set_x(y);
	set_y(0);
	this->z = z;
}

void CLpoint3D::deplacerPoint3D(int x, int y, int z)
{
	deplacer_point2D(x, y);
	this->z = this->z + z;
}
