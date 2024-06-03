#pragma once
#include "Worker.h"

class Professor : public Worker
{
public:
	Professor() {
		
		cout << "Professor default constructor" << endl;
	}

	Professor(string name, int age, double salary) 
		: Worker(name, age, salary) {}

	~Professor() {
		cout << "Professor destructor" << endl;
	}
};

