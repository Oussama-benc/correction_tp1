#pragma once
class Point
{
public:
	Point();
	Point(double, double);
	void set_X(double);
	double get_X()const;
	void set_Y(double);
	double get_Y()const;
	void Affichage();
	Point convertion(double, double);
	bool comparer(Point);
	double distance(Point);


private:
	double X;
	double Y;


};