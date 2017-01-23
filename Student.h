#include <string>
#ifndef STUDENTS_H
#define STUDENTS_H

class Students
{
private:
	int studentId = 0;
	std::string studentName = " ";

public:
	void setId(int);
	int getId( );
	void setName(std::string);
	std::string getName( );
};
#endif

//Implementation file. C++ file.
#include <string>
#include "Students.h"

void Students::setId(int x)
{
	studentId = x;
}
