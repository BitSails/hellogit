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
	//constructor initializing Racer's names and Racer's Category
	Racer(const string name, const int category);

	//function to set the Racer name
	void setRacerName(const string name);

	//function to set the Racer's Category
	void setRacerCategory(const int category);

	//function to display information
	void displayInfo();

	//function to retrieve the Racer's name
	string getRacerName();

	//function to retrieve the Racer's Category
	int getracerCategory();

private:
	string racerName;
	int racerCategory;	

};

#endif
