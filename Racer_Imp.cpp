//Racer Class Implementation
#include<string>
#include<array>
#include<iostream>
#include<iomanip>
using namespace std;

#include "Racer.h"

Racer::Racer(string name, int category)  //constructor
{
	racerName = name;
	racerCategory = category;
}

//set the Racer name
void Racer::setRacerName(string name)
{
	racerName = name;
}

//retrieve the Racer name	
string Racer::getRacerName()
{
	return racerName;
}

//set the Racer Category
void Racer::setRacerCategory(int category)
{
	racerCategory = category;
}

//retrieve the Racer Category
int Racer::getracerCategory()
{
	return racerCategory;
}

//displays all of the Racer object's data
void Racer::displayInfo()
{
	cout << "Name: " << racerName << endl;
	cout << "Category: " << racerCategory << endl;
}	

