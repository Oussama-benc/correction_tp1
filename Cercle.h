#pragma once
#include "Point.h"
class Cercle
{
public:
	Cercle();
	Cercle(Point, double);
	double surface();
	double perimetre();
	bool egalite(Cercle);
	bool appartenance(Point);


private:
	Point _centre;
	double _rayon;

};