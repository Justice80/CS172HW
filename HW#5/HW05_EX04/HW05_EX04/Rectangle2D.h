#ifndef RECTANGLE_H_
#define RECTANGLE_H_

class Rectangle2D {
private:
	double height;
	double width;
	double x;
	double y;
public:
	Rectangle2D();
	Rectangle2D(double,double,double,double);
	void setx(double);
	double getx() const;
	void sety(double); 
	double gety() const;
	void setWidth(double);
	double getWidth() const;
	void setHeight(double);
	double getHeight() const;
	double getArea() const;
	double getPerimeter() const;
	bool contains(double, double) const;
	bool contains(const Rectangle2D &r) const;
	bool overlaps(const Rectangle2D &r) const;
};

#endif