/*
Justice Martinez
HW #5
Ex01 - Analyze Input
*/
#include <iostream>

int *allocateArray(int);
double Avg(int *, int);
int AboveAvg(int *, int, int);

int main() {
	
	int size;
	std::cout << "How many numbers are you going to enter? "; //ask for size of array
	std::cin >> size; //get size of array from user
	int *array = allocateArray(size); //allocate array
	double avg = Avg(array, size);
	std::cout << "The average of these numbers is " << avg << std::endl; //find average of array
	std::cout << "There are " << AboveAvg(array, size, avg) << " above average.\n"; //find how many numbers are above average

	delete[] array; //delete array

	return 0;
}

int *allocateArray(int size) {
	//Allocate new array
	int *array1 =new int[size];
	std::cout << "Enter your numbers: ";
	//Initialize the array wiht user input
	for (int i = 0; i < size;i++) {
		std::cin >> array1[i];
	}

	return array1; //return the pointer
}

double Avg(int *array_, int size) {
	
	int sum = 0;
	double avg;
	//find the sum of all integers in the array
	for (int i = 0; i < size; i++) {
		sum += array_[i];
	}
	//average of items in array
	avg = (static_cast<double>(sum) / size);

	return avg; //return average
}

int AboveAvg(int *array_, int size, int avg) {
	
	int count = 0;
	//count every item above average
	for (int i = 0; i < size;i++) {
		if (array_[i] > avg)
			count++;
	}

	return count; //return count of items above average
}