#ifndef POLYGON_H_
#define POLYGON_H_

class Polygon {
private:
	int n; //number of sides
	double side; //length of the sides
	double x; //center of polygon x-axis
	double y; //cent of polygon y-axis
public:
	Polygon();
	Polygon(int, double);
	Polygon(int, double, double, double);
	double getPerimeter();
	double getArea();
	void setN(int);
	void setSide(double);
	void setX(double);
	void setY(double);
	int getN() { return n; }
	double getSide() { return side; }
	double getX() { return x; }
	double getY() { return y; }
};
#endif