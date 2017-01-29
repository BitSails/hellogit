//Racer Driver file
#include<string>
#include<array>
#include<iostream>
#include<iomanip>

using namespace std;

#include "Racer.h"

int main()
{
	string name = "";
	int category = 0;
	Racer bikeRacer(name, category);	

	cout << "Enter the Bike racer's name: ";
	getline(cin, name);

	cout << "\nEnter the Bike racer's Category Level:";
	cin >> category;

	bikeRacer.setRacerName(name);
	bikeRacer.setRacerCategory(category);	

	bikeRacer.displayInfo();

	return 0;

} 

// Figured out how to get this done on the windows side of things using Visual Studio
