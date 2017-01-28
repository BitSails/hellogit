#include <vector>
#include "Student.h"


Student::Student() {
	newGrade = ' ';
}

Student::Student(string name, char grade) {
	newName = name;
	newGrade = grade;
}

string Student::getName() const {
	return newName;
}

char Student::getGrade() const {
	return newGrade;
}

void Student::setName(string name) {
	newName = name;
}

void Student::setGrade(char grade) {
	newGrade = grade;
}

void fillVector(vector<Student>&);
void printVector(const vector<Student>&);

void fillVector(vector<Student>& newClass) {

	string name;
	char grade;

	cout << "Please enter the amount of students in class? " << endl;
	int numStudents;
	cin >> numStudents;

	for (int i = 0; i < numStudents; i++) {
		cout << "Please enter Student's Name: ";
		cin >> name;
		cout << "Please enter Student's Grade: ";
		cin >> grade;

		Student newStudent(name, grade);
		newClass.push_back(newStudent);
		cout << endl;
	}
	cout << endl;

}

void printVector(const vector<Student>& newClass) {
	for (unsigned int i = 0; i < newClass.size(); i++) {
		cout << "Student Name: " << newClass[i].getName() << endl;
		cout << "Student Grade: " << newClass[i].getGrade() << endl;
		cout << endl;

	}
}

