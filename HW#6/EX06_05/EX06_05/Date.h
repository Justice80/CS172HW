#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <string>
#include <vector>

class Date {
private:
	int year;
	int month;
	int day;
public:
	Date() {
		year = 0;
		month = 0;
		day = 0;
	}

	Date(int y, int m, int d) {
		year = y;
		month = m;
		day = d;
	}

	int getYear() { return year; }
	int getMonth() { return month; }
	int getDay() { return day; }
};

#endif