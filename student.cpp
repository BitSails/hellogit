// Lab 1

// including header file for access to Student class
#include "student.h"
#include <string>


// Implementing the member function prototypes declared in class Students
Student::Student(std::string name, int age){
	student_Name = name;
	student_Age = age;
}
void Student::set_StudentName(std::string name){
	student_Name = name;
}

std::string Student::get_StudentName() const{
	return student_Name;
}

void Student::set_StudentAge(int age){
	student_Age = age;
}

int Student::get_StudentAge() const{
	return student_Age;
}
