# include <iostream>
# include <string>
# include "Classroom.h"
using namespace std;

Classroom::Classroom(int x, string y) {
	seats = x;
	location = y;
}

void Classroom::setSeats(int x) {
	seats = x;
}

int Classroom::getSeats() {
	return seats;
}

void Classroom::setLocation(string y) {
	location = y;
}

string Classroom::getLocation() {
	return location;
}
