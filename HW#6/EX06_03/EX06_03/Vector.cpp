#include <iostream>
#include <string>
#include "Vector.h"

using namespace std;

template <typename T>
Vector<T>::Vector() {
	vectorSize = 0;
}

template <typename T>
bool Vector<T>::empty() {
	return (vectorSize == 0);
}

template <typename T>
T Vector<T>::at(int index) {
	return elements[index];
}

template <typename T>
void Vector<T>::push_back(T value) {
	elements[vectorSize++] = value;
}

template <typename T>
T Vector<T>::pop_back() {
	return elements[--vectorSize];
}

template <typename T>
unsigned int Vector<T>::size() {
	return vectorSize;
}

template <typename T>
int Vector<T>::clear() {
	return vectorSize;
}

template <typename T>
void Vector<T>::swap(Vector v2) {
	T temp[1000];
	int tempSize = v2.size();
	for (int i = 0; i < v2.size; i++){
		temp[i] = v2.at(i);
	}
	v2.clear();
	for (int i = 0; i < size(); i++) {
		v2.push_back(at(i));
	}
}