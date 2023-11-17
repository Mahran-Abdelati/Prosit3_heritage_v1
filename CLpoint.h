#pragma once

class CLpoint
{
private :
	int x;
	int y;
protected :
	int z;
public :
	CLpoint(void);
	CLpoint(int x, int y);
	virtual void set_x(int x);
	virtual void set_y(int y);
	virtual void set_z(int z);
	virtual int get_x();
	virtual int get_y();
	virtual int get_z();
	virtual void deplacer_point2D(int x, int y);
	virtual void afficherCoordo();
};

