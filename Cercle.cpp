#include "Cercle.h"
#include <cmath>
#include <iostream>
using namespace std;

const int pi = 3.14;

Cercle::Cercle()
{
	this->_rayon = 0.0,
		this->_centre = Point();

}

Cercle::Cercle(Point p, double r)
{
	this->_rayon = r;
	this->_centre = p;
}
double Cercle::surface()
{
	double surface;
	surface = pi * pow(this->_rayon, 2);
	return surface;
}

double Cercle::perimetre()
{
	double perimetre;
	perimetre = 2 * pi * this->_rayon;
	return perimetre;
}

bool Cercle::egalite(Cercle c)
{

	if (this->_rayon == c._rayon && this->_centre.comparer(c._centre)) {
		return true;
	}
	return false;
}

bool Cercle::appartenance(Point p)
{
	if (_centre.distance(p) < _rayon) {
		return true;
	}
	return false;
}