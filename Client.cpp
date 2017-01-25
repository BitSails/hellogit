#include "Employee.h"
#include <iostream>
#include <vector>
using namespace std;



int main() {


	vector<Employee>v;
	Employee emp; 

	emp.setName("Cameron Cobham");
	emp.setHours(42);
	v.push_back(emp);



	emp.setName("Sheena Weekes");
	emp.setHours(22);
	v.push_back(emp);



	emp.setName("Fabain King");
	emp.setHours(30);
	v.push_back(emp);



	emp.setName("Keanna Jones");
	emp.setHours(40);
	v.push_back(emp);





	for (unsigned int i = 0; i < v.size(); ++i) {
		cout<< "Name: " << v[i].getName() << "  Hours Worked: " << v[i].getHours()<<endl;

	}

	


	return 0;
}
