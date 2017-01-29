//Racer Class Implementation

#include "Racer.h"

using namespace std;

//constructor
Racer::Racer(const string name, const int category)
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
	cout << "**** Rider's Name and Category	****" << endl;
	cout << "Name: " << racerName << endl;
	cout << "Category: " << racerCategory << endl;
	cout << "        *******************" << endl;
}	
