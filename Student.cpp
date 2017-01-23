//Implementation file. C++ file.
#include <string>
#include "Students.h"

void Students::setId(int x)
{
	studentId = x;
}

int Students::getId( )
{
	return studentId;
}

void Students::setName(std::string y)
{
	studentName = y;
}

std::string Students::getName( )
{
	return studentName;
}
