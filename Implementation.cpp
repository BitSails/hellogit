#include "Employee.h"
using namespace std;


void Employee::setName(string nm) {
	name = nm;
}



string Employee::getName() {
	return name;
}



void Employee::setHours(int hrs) {
	hoursWorked = hrs;
}

int Employee::getHours() {
	return hoursWorked;
}

Employee::Employee() {
name = "";
hoursWorked = 0;
}
