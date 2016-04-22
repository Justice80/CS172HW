#include <iostream>
#include <string>

template <typename T>
int linearSearch(const T list[], T key, int arraySize){
	for (int i = 0; i < arraySize; i++) {
		if (key == list[i])
			return i;
	}

	return -1;
}

void main() {
	int intList[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	double doubList[10] = { 0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9 };
	std::string stringList[10] = { "zoomba", "stop", "very", "pony", "octopus", "", "grass", "black", "hammock", "squirrels" };
	std::string s = "";

	std::cout << linearSearch(intList, 7, 10) << std::endl;
	std::cout << linearSearch(doubList, 1.0, 10) << std::endl;
	std::cout << linearSearch(stringList, s, 10) << std::endl;
}

