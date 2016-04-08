/*
Justice Martinez
HW #5
Ex02 - Increase array size
*/
#include <iostream>

int *doubleCapacity(const int *, int);

void main() {
	const int size = 5;
	int newSize = size;
	int *array1 = new int [size];//initial array of size 5
	int num;
	
	for (int j = 0; j < size; j++) {
		array1[j] = j;
	}
	//ask for number of ints they want to enter
	std::cout << "How many numbers do you want to enter? ";
	std::cin >> num;
	//If they want to enter more number than the alloted 5 double capacity of the array
	while (num > newSize) {
		array1 = doubleCapacity(array1, size);
		newSize *= 2;
	}


	for (int k = size; k < newSize; k++){
		array1[k] = k;
	}

	for (int i = 0; i < num; i++) {
		std::cout << array1[i] << std::endl;
	}

	delete[] array1;
}
//doubles the capacity of the array
int *doubleCapacity(const int *list, int size) {
	int *array2 = new int[size * 2];
	//puts values from original list into new array
	for (int i = 0; i < size; i++) {
		array2[i] = list[i];
	}

	delete[] list;

	return array2;
}