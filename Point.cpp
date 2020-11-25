#include "Point.h"
#include <string>
#include <iostream>
#include <cmath>
using namespace std;


Point::Point()
{
	this->X = 0.0;
	this->Y = 0.0;
}

Point::Point(double x, double y)
{
	this->X = x;
	this->Y = y;
}

void Point::set_X(double x)
{
	this->X = x;
}

void Point::set_Y(double y)
{
	this->Y = y;
}

double Point::get_X() const
{
	return this->X;
}

double Point::get_Y() const
{
	return this->Y;
}

void Point::Affichage()
{

	string _sur = "(" + to_string(this->X) + "," + to_string(this->Y) + ")";
	cout << _sur << endl;

}

Point Point::convertion(double dx, double dy)
{
	Point nv;
	nv.X = this->X + dx;
	nv.Y = this->Y + dy;
	return nv;
}

bool Point::comparer(Point p)
{
	if (this->X == p.X && this->Y == p.Y) {
		return true;
	}
	return false;

}

double Point::distance(Point p)
{

	double dist = sqrt(pow(this->X - p.X, 2) + pow(this->Y - p.Y, 2));
	return dist;
}