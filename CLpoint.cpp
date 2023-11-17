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

void CLpoint::set_point(int x, int y)
{
	this -> x = x;
	this -> y = y;
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
	return this -> z;
}

void CLpoint::deplacer_point(int x, int y)
{
	this -> x = this -> x + x;
	this -> y = this -> y + y;
}

void CLpoint::afficherCoordo()
{
	cout << "Composante x du point : " << this -> x << endl;
	cout << "Composante y du point : " << this -> y << endl;
}