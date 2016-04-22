#include <iostream>

template <typename T>
bool isSorted(const T list[], int Arraysize) {
	for (int i = 0; i < Arraysize; i++) {
		for (int j = i + 1; j < Arraysize; j++) {
			if (list[i] > list[j])
				return false;
		}
	}

	return true;
}

void main() {
	int intList[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	double doubList[10] = { 0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9 };
	std::string stringList[10] = { "zoomba", "stop", "very", "pony", "octopus", "", "grass", "black", "hammock", "squirrels" };

	std::cout<< std::boolalpha << isSorted(intList, 10) << std::endl;
	std::cout << std::boolalpha << isSorted(doubList, 10) << std::endl;
	std::cout << std::boolalpha << isSorted(stringList, 10) << std::endl;
}