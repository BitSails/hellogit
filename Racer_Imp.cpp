//Racer Class Implementation

#include "Racer.h"

using namespace std;

//constructor
Racer::Racer()
	{
		racerName = " ";
		racerCategory = 0;
}

//Overload Constructors
Racer::Racer(string name, int category)
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
string Racer::getRacerName() const
{
	return racerName;
}

//set the Racer Category
void Racer::setRacerCategory(int category)
{
	racerCategory = category;
}

//retrieve the Racer Category
int Racer::getracerCategory() const
{
	return racerCategory;
}

//displays all of the Racer object's data
void Racer::displayInfo() const
{
	cout << "**** Rider's Name and Category	****" << endl;
	cout << "Name: " << racerName << endl;
	cout << "Category: " << racerCategory << endl;
	cout << "        *******************" << endl;
}	
