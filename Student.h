#include <string>
#ifndef STUDENT_H
#define STUDENT_H

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


