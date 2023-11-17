#pragma once

class CLpoint
{
private :
	int x;
	int y;
	int z;
public :
	CLpoint(void);
	CLpoint(int x, int y);
	virtual void set_point(int x, int y);
	virtual int get_x();
	virtual int get_y();
	virtual int get_z();
	virtual void deplacer_point(int x, int y);
	virtual void afficherCoordo();
};

