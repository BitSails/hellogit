#include <iostream>
#include <string>
#include <vector>
#include "Student.h"

using namespace std;

void fillVector(vector<Student> newClass) ;
void printVector(const vector<Student> newClass);
int linearSearch(vector<Student> newClass, auto key);

int main() {

	vector<Student> myclass;
	
	fillVector(myclass);
	printVector(myclass) ;
	linearSearch(myclass,  key);
	
	return 0;
	
}

int linearSearch(vector<Student> newClass, auto key)
	{
		string key;
		for(int i = 0; i < newClass.size(); i ++)
		{
			if (newClass[i] == key)//we found it
			{
				return i;//return its location
			}
		}//end for
		return -1;//element not found
	}


void fillVector(vector<Student> newClass) {

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

void printVector(const vector<Student> newClass) {
	for (unsigned int i = 0; i < newClass.size(); i++) {
		cout << "Student Name: " << newClass[i].getName() << endl;
		cout << "Student Grade: " << newClass[i].getGrade() << endl;
		cout << endl;

	}
}