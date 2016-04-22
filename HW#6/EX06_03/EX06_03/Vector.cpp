#include <iostream>
#include <string>
#include "Vector.h"

using namespace std;

template <typename T>
template Vector::Vector() {
	vectorSize = 0;
}

template <typename T>
template bool Vector::empty() {
	return (vectorSize == 0);
}

template <typename T>
template T Vector::at(int index) {
	return elements[index];
}

template <typename T>
template void Vector::push_back(T value) {
	elements[vectorSize++] = value;
}

template <typename T>
template T Vector::pop_back() {
	return elements[--vectorSize];
}

template <typename T>
template unsigned int Vector::size() {
	return vectorSize;
}

template <typename T>
template int Vector::clear() {
	return vectorSize;
}

template <typename T>
template void Vector::swap(Vector v2) {
	T temp[100];
	int tempSize = v2.size();
	for (int i = 0; i < v2.size; i++){
		temp[i] = v2.at(i);
	}
	v2.clear();
	for (int i = 0; i < size(); i++) {
		v2.push_back(at(i));
	}
}