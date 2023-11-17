#include "CLpoint.h"
#include <iostream>

using namespace std;

CLpoint::CLpoint(void)
{
	this -> x = 0;
	this -> y = 0;
}

CLpoint::CLpoint(int x, int y)
{
	this -> x = x;
	this -> y = y;
}

void CLpoint::set_x(int x)
{
	this -> x = x;
}

void CLpoint::set_y(int y)
{
	this->y = y;
}

void CLpoint::set_z(int z)
{
	this->z = z;
}

int CLpoint::get_x()
{
	return this -> x;
}

int CLpoint::get_y()
{
	return this -> y;
}

int CLpoint::get_z()
{
	return this->z;
}

void CLpoint::deplacer_point2D(int x, int y)
{
	this -> x = this -> x + x;
	this -> y = this -> y + y;
}

void CLpoint::afficherCoordo()
{
	cout << "Composante x du point : " << this -> x << endl;
	cout << "Composante y du point : " << this -> y << endl;
	cout << "Composante z du point : " << this->z << endl;
}