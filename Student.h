#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class Student {
	private:
		string newName;
		char newGrade;

	public:
		Student();

		Student(string, char);

		string getName() const;
		char getGrade() const;

		void setName (string);
		void setGrade(char);
};
#endif // !STUDENT_H

