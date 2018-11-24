#include <string>
#ifndef CLASS_H
#define CLASS_H






class Employee {
	
public:
	Employee();

	void setName(std::string);

	std::string getName();

	void setHours(int);

	int getHours();
	


private:
	std:: string name;
	int hoursWorked;
};

#endif // !EMPLOYEE_H