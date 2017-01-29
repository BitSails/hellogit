//Racer Class
#include<string>
#include<array>
#include<iostream>
#include<iomanip>
using namespace std;

#ifndef RACER_H
#define RACER_H

//Racer class definition
class Racer
{

public:
	//default constructor initializing Racer's names and Racer's Category
	Racer();

	//Overload constructor
	Racer(string name, int category);

	//function to set the Racer name
	void setRacerName(string name);

	//function to set the Racer's Category
	void setRacerCategory(int category);

	//function to display information
	void displayInfo() const;

	//function to retrieve the Racer's name
	string getRacerName() const;

	//function to retrieve the Racer's Category
	int getracerCategory() const;

private:
	string racerName;
	int racerCategory;	

};

#endif
