// Lee Daniel
// Lab 1

#include "student.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

	Student stud;                          // declare an object named stud of type Student class

	vector<Student> vec;                   // declare a vector containing objects of Student Class

	stud.set_StudentName("ShockWave");     // set student name
	stud.set_StudentAge(22);               // set student age
	vec.push_back(stud);                   // store objects on the first index of vector


	stud.set_StudentName("Optimus Prime");
	stud.set_StudentAge(25);
	vec.push_back(stud);                    // store objects on the second index of vector


	stud.set_StudentName("BumbleBee");
	stud.set_StudentAge(19);
	vec.push_back(stud);                    // store objects on the third index of vector


	stud.set_StudentName("LockDown");
	stud.set_StudentAge(27);
	vec.push_back(stud);                    // store objects on the fourth index of vector

    // display the size of the vector
	cout << "The vector of objects now has the size of " << vec.size() << "\n\n";

    // iterate through each index of the vector and display the student name and age
    cout << "Student Name" << "\t\t" << "Student Age" << "\n\n";
	for(int i = 0; i < vec.size(); i++){

        cout << vec[i].get_StudentName() << "\t\t" << vec[i].get_StudentAge() << endl;
	}
}
