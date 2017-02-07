//Racer Driver file
#include <string>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cstdlib>//for "exit()" on some systems

using namespace std;

#include "Racer.h"

void fillVector(vector<Racer>&);
void printVector(const vector<Racer>&);
void printVector2(const vector<Racer>&); //Need help to understand this.
int linearSearch(vector<Racer>& data, auto key);//function prototype for linear search.


int main()
{	
	string search_key, input;
	int result;	
	vector<Racer> racerArray;

	fillVector(racerArray);
	
	
	// Implemented the linear function search from the algos lab.
	// Commit out from here to "printVector2" to gain back the orginal 
	//implementation of this program.
	
	cout<<endl<<"To end input type the #-character (followed by Enter)"<<endl<<endl;
	cout<<"Enter a value to search for: ";
	cin>>search_key;
	
	
	while(search_key != "#")//perform searches until sentinel entered
    {
        result = linearSearch(racerArray,search_key);

        cout<<"  '"<<search_key<<"' was ";

        if (result == -1)
          cout<<"not found";
        else
          cout<<"found at index "<<result;


        cout<<endl<<endl<<"Enter a value to search for: ";
        cin>>search_key; 
    }

	//printVector2(racerArray);
	
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

int linearSearch(vector<Racer>& data, auto key)
{	
	for (int i = 0; i < data.size(); i++)
	{
		if (data[i].getRacerName() == key)
		{
			return i;
			}
		}
	return -1;
	
}

