#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
	string name;
	int age;
	double mark;

	static int count;

public:	
	
	static const int MAX_MARK = 10;
	static const int MIN_MARK = 0;

	static const int MAX_AGE = 100;
	static const int MIN_AGE = 0;
	
	Student();
	Student(string, int, double);
	Student(string);

	~Student();

	string getName();
	
	int getAge();
	void setAge(int);

	double getMark();
	void setMark(double);

	static int getCount();

	string convert();

	Student operator+(int number) {
		if (mark + number > 10 || mark + number < 0) {
			return *this;
		}

		return Student(name, age, mark + number);
	}
};
