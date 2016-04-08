#include <iostream>
#include "Rectangle2D.h"

void main() {

	Rectangle2D r1(2, 2, 5.5, 4.9), r2(4, 5, 10.5, 3.2), r3(3, 5, 2.3, 5.4);

	std::cout << std::boolalpha << r1.contains(3, 3) << std::endl;
	std::cout << std::boolalpha << r1.contains(r2) << std::endl;
	std::cout << std::boolalpha << r1.overlaps(r3) << std::endl;

}