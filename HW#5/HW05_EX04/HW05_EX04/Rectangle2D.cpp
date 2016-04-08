#include "Rectangle2D.h"

Rectangle2D::Rectangle2D() {
	this->x = 0;
	this->y = 0;
	this->width = width;
	this->height = height;
}

Rectangle2D::Rectangle2D(double x1, double y1, double width1, double height1) {
	this->x = x1;
	this->y = y1;
	this->width = width1;
	this->height = height1;
}

void Rectangle2D::setx(double x1) {
	this->x = x1;
}

double Rectangle2D:: getx() const { return x; }

void Rectangle2D::sety(double y1) {
	this->y = y1;
}

double Rectangle2D::gety() const { return y; }

void Rectangle2D::setWidth(double width1) {
	this->width = width1;
}

double Rectangle2D::getWidth() const { return width; }

void Rectangle2D::setHeight(double height1) {
	this->height = height1;
}

double Rectangle2D::getHeight() const { return height; }

double Rectangle2D::getArea() const { return (width*height); }

double Rectangle2D::getPerimeter() const { return ((2 * height) + (2 * width)); }

bool Rectangle2D::contains(double x1, double y1) const {

	double halfWidth = width / 2;
	double halfHeight = height / 2;

	if ((x + halfWidth) > x1 && (x - halfWidth) < x1) {
		if ((y + halfHeight) > y1 && (y - halfHeight) < y1) {
			return true;
		}
	}

	return false;
}

bool Rectangle2D::contains(const Rectangle2D &r) const {

	if ((x + (width / 2)) > (r.getx() + (r.getWidth() / 2)) && (x - (width / 2)) < (r.getx() - (r.getWidth() / 2))) {
		if ((y + (height / 2)) > (r.gety() + (r.getHeight() / 2)) && (y - (height / 2)) < (r.gety() - (r.getHeight() / 2))) {
			return true;
		}
	}

	return false;
}

bool Rectangle2D::overlaps(const Rectangle2D &r) const {

	if ((x + (width / 2)) > (r.getx() + (r.getWidth() / 2)) || (x - (width / 2)) < (r.getx() - (r.getWidth() / 2))) {
		if ((y + (height / 2)) > (r.gety() + (r.getHeight() / 2)) || (y - (height / 2)) < (r.gety() - (r.getHeight() / 2))) {
			return true;
		}
	}

	return false;
}
