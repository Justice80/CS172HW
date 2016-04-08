#include <iostream>

int *smallest(int *array1, int size);

void main() {

	int size = 8;
	int array_[] = { 1, 2, 4, 5, 10, 100, 2, -22 };
	int *parray_ = array_;

	std::cout << *smallest(parray_, size) << std::endl;
}

int *smallest(int *array1, int size) {

	int *smallest = NULL;

	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (array1[i] > array1[j])
				smallest = &array1[j];
		}
	}

	return smallest;
}