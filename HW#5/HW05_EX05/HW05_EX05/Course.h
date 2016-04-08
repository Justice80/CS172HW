#ifndef COURSE_H_
#define COURSE_H_
#include <string>

class Course {
private:
	std::string courseName;
	std::string *students;
	int numberOfStudents;
	int capacity;
public:
	Course(const std::string &courseName, int capacity);
	~Course();
	std::string getCourseName() const;
	void addStudent(const std::string &name);
	void dropStudent(const std::string &name);
	std::string *getStudents() const;
	int getNumberOfStudents() const;
	void clear();
	Course(const Course&);
	std::string *doubleCapacity(const std::string *students, int capacity);
};

#endif 