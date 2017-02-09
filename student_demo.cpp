// Lab 1

#include "student.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;


int linearSearch(auto data, auto key);

int main(){

	vector<Student> vec;                   // declare a vector containing objects of Student Class
	int result;
	string search_key;

	// stud.set_StudentName("ShockWave");     // set student name
	// stud.set_StudentAge(22);               // set student age
	vec.push_back({"ShockWave", 22});                   // store objects on the first index of vector


	// stud.set_StudentName("Optimus Prime");
	// stud.set_StudentAge(25);
	vec.push_back({"Optimus Prime", 25});                    // store objects on the second index of vector


	//stud.set_StudentName("BumbleBee");
	//stud.set_StudentAge(19);
	vec.push_back({"BumbleBee", 19});                    // store objects on the third index of vector


	//stud.set_StudentName("LockDown");
	//stud.set_StudentAge(27);
	vec.push_back({"LockDown", 27});                    // store objects on the fourth index of vector

    	// display the size of the vector
	cout << "The vector of objects now has the size of " << vec.size() << "\n\n";

    	// iterate through each index of the vector and display the student name and age
    	cout << "Student Name" << "\t\t" << "Student Age" << "\n\n";
	//for(int i = 0; i < vec.size(); i++){
	for(auto stud:vec){ // for each student(stud) in vector

        	cout << stud.get_StudentName() << "\t\t" << stud.get_StudentAge() << endl;
	}

        cout << "Search for a word in the vector, end program by inserting the $: " << endl << ">> ";
        cin >> search_key;

    	while(search_key != "$")//perform searches until sentinel entered
    	{
            result = linearSearch(vec, search_key);

            cout <<"  '" << search_key << "' requested: ";

            if (result == -1)
                cout << "not found" << endl << endl;
            else
                cout << "found at index " << result << endl << endl;
	
		
	   cout << "Search for a word in the vector, end program by inserting the $: " << endl << ">> ";
           cin >> search_key;

        }
}

// linear search function
int linearSearch(auto data, auto key)
{
	for(int i = 0; i < data.size(); i++){
		if(data[i].get_StudentName() == key){
			return i;
		}
	}

	return -1;
}
