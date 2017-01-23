#include <iostream>
#include <vector>
#include "Student.h"

using namespace std;

int main()
{
	vector<Students> school; //created a vector which holds students
	Students stud; //created an object of type student
	string name = " ";

	for (int j = 1; j < 5; j++) {
		cout << "Please enter the name of a student" << endl;
		cin >> name;
		stud.setId(j);
		stud.setName(name);
		school.push_back(stud);
	}//end of first for loop
	cout << endl << endl <<"Size of vector is " << school.size() << endl;
	cout << "The contents are:" << endl;

	for (int i = 0; i < school.size(); i++) {
		cout << school[i].getId( ) << "  "
			<< school[i].getName( ) << endl;
	}//end of second for loop
	system("pause");
	return 0;
}
