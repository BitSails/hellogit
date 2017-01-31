//Racer Driver file
#include<string>
#include<vector>
#include<iostream>
#include<iomanip>
#include <algorithm>

using namespace std;

#include "Racer.h"

void fillVector(vector<Racer>&);
void printVector(const vector<Racer>&);
void printVector2(const vector<Racer>&); //Need help to understand this.


int main()
{	
	vector<Racer> racerArray;

	fillVector(racerArray);

	printVector2(racerArray);
	
	system("pause");

	return 0;

} 

void fillVector(vector<Racer>& newRacerArray)
{
	for (int x = 0; x < 4; x++)
	{
		int category;
		string name;
		cout << "Enter the Bike racer's name: ";
		getline(cin, name);

		cout << "\nEnter the Bike racer's Category Level:";
		cin >> category;
		cin.ignore();

		Racer newRacer(name, category);
		newRacerArray.push_back(newRacer);
		cout << endl;
	}
	cout << endl;
}

void printVector(const vector<Racer>& newprintRacer)
{
	unsigned int vectorSize = newprintRacer.size();

	for (unsigned int i = 0; i < vectorSize; i++)
	{
		cout << "Rider's name: " << newprintRacer[i].getRacerName() << endl;
		cout << "Rider's category: " << newprintRacer[i].getracerCategory() << endl;
		cout << endl;
	}

}

void printVector2(const vector<Racer>& newprintRacer)
{
	unsigned int vectorSize = newprintRacer.size();

	for (unsigned int i = 0; i < vectorSize; i++)
	{
		newprintRacer[i].displayInfo();
	}

}

