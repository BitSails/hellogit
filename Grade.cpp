#include <iostream>
#include <string>
#include "Grade.h"

using namespace std;

	void Grade::setMark (int a) {
	mark = a; }
	
	int Grade::getMark () {
	return mark;}
	
	void Grade::setName (string b) {
	name = b;}
	
	string Grade::getName() {
	return name;};
	
	Grade::Grade()
	{ 
		mark = 0;
		name = " ";
		}
	
