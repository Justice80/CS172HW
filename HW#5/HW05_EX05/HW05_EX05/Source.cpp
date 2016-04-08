#include <iostream>
#include "Course.h"

void main() {

	Course course1("Data Structures", 10);

	course1.addStudent("Peter Jones");
	course1.addStudent("Brian Smith");
	course1.addStudent("Anne Kennedy");
	course1.dropStudent("Anne Kennedy");

	std::cout << "Number of studnets in course1: " << course1.getNumberOfStudents() << std::endl;
	std::string *students = course1.getStudents();

	for (int i = 0; i < course1.getNumberOfStudents(); i++){
		std::cout << students[i] << ", ";
	}

	Course course2(course1);
	course1.~Course();
}