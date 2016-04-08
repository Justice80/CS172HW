#include <iostream>
#include "Course.h"

Course::Course(const std::string &courseName, int capacity) {
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	students = new std::string[capacity];
}

Course::~Course() {
	delete[] students;
}

std::string Course::getCourseName() const { return courseName; }

void Course::addStudent(const std::string &name) {
	std::string *newStudents = new std::string[capacity * 2];
	if (numberOfStudents == capacity) {
		newStudents = doubleCapacity(students, capacity);
	}

	newStudents[numberOfStudents] = name;
	numberOfStudents++;
}

void Course::dropStudent(const std::string &name) {
	
	for (int i = 0; i < numberOfStudents; i++) {
		if (students[i] == name){
			students[i] = "";
			numberOfStudents--;
			std::string *newList = new std::string[numberOfStudents - 1];
			for (int j = 0; j < numberOfStudents; j++) {
				if (j!=i) {
					newList[j] = students[j];
				}
			}
			students = newList;
		}
	}
}

std::string *Course::getStudents() const { return students; }

int Course::getNumberOfStudents() const { return numberOfStudents; }

void Course::clear() {
	for (int i = 0; i < numberOfStudents; i++){
		students[i] = "";
	}
}

Course::Course(const Course& course) {
	courseName = course.courseName;
	numberOfStudents = course.numberOfStudents;
	capacity = course.capacity;
	students = new std::string[capacity];
}

std::string *Course::doubleCapacity(const std::string *students, int capacity) {
	std::string *array2 = new std::string [capacity * 2];
	//puts values from original list into new array
	for (int i = 0; i < capacity; i++) {
		array2[i] = students[i];
	}

	delete[] students;

	return array2;
}