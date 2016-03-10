/*
Justice Martinez
CS172-1
EX03_02 Polygon Problem
*/

#include <iostream>
#include "Polygon.h"

void main() {

	Polygon P1, P2(6, 4), P3(10, 4, 5.6, 738);
	std::cout << "The Perimeter of the polygon is " << P1.getPerimeter() << std::endl <<
		"The area of the polygon is " << P1.getArea() << std::endl;
	std::cout << "The Perimeter of the polygon is " << P2.getPerimeter() << std::endl <<
		"The area of the polygon is " << P2.getArea() << std::endl;
	std::cout << "The Perimeter of the polygon is " << P3.getPerimeter() << std::endl <<
		"The area of the polygon is " << P3.getArea() << std::endl;
}