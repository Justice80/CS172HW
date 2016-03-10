#include <iostream>
#include "Polygon.h"

Polygon::Polygon() {
	n = 3;
	side = 1;
	x = 0;
	y = 0;
}

Polygon::Polygon(int num, double s) {
	n = num;
	side = s;
	x = 0;
	y = 0;
}

Polygon::Polygon(int num, double s, double xCor, double yCor) {
	n = num;
	side = s;
	x = xCor;
	y = yCor;
}

void Polygon::setN(int num) {
	n = num;
}

void Polygon::setSide(double s) {
	side = s;
}

void Polygon::setX(double xCor) {
	x = xCor;
}

void Polygon::setY(double yCor) {
	y = yCor;
}

double Polygon::getPerimeter() {
	double Perimeter = static_cast<double>(n)* side;
	return Perimeter;
}

double Polygon::getArea() {
	double Area = ((static_cast<double>(n)*side*side) / (4 * tan(3.14 / n)));
	return Area;
}