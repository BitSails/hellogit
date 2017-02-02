#include <iostream>
#include "Average.h"
#include <string>
#include <vector>
using namespace std;

int main() {

	Grades grade1 { 350 , 10 };
	Grades grade2 { 450 , 20 };
	Grades grade3 { 275 , 15 };
	Grades grade4 { 600 , 25 };
	vector <Grades> v = { grade1, grade2, grade3, grade4 }
	for (int x = 0; x < v.size(); x++) {
		cout << "Grade: " << v[x].getGrade() << ", No. of students: " << v[x].getNum() << ", Class average: " << v[x].getAverage();
		cout << endl;
	}
	system("Pause");
	return 0;
}
