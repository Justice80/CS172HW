#ifndef VECTORCLASS_H
#define VECTORCLASS_H
#include <iostream>
#include <string>

using namespace std;

template <typename T>
class Vector {
private:
	T elements[100];
	int vectorSize;
public:
	Vector();
	void push_back(T element);
	T pop_back();
	unsigned int size();
	bool empty();
	T at(int index);
	int clear();
	void swap(Vector v2);
};

#endif