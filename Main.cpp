#include <iostream>
#include <string>
#include <vector>
#include "Student.h"

using namespace std;

void fillVector(vector<Student> newClass) ;
void printVector(const vector<Student> newClass);


int main() {
	
	string result;
	string key;
	
	vector<Student> myclass;
	
	fillVector(myclass);
	printVector(myclass);
	
	cout << "Please enter the name of the student you would like to search" << endl;
	cin >> name;
	
	while(name != "#")
	{
		result = linearSearch(myclass,  name);
		cout << " " << key << "was ";
		if (result == .1)
			cout << " not found";
		else
			cout << " found" << result;
	}

	
	
	return 0;
	
}

int linearSearch(vector<Student> newClass, string name)
	{
		
		for(int i = 0; i < newClass.size(); i ++)
		{
			if (newClass[i] == name)//we found it
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