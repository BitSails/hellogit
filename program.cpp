
// this is the client file called program.cpp
#include "SportsCar.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int passengers;
	float temp;
	vector<SportsCar> details;

	SportsCar porsche; // an object of type SportsCar called porshe
	porsche.set_numPassengers(4);
	porsche.set_temperature(16.5);
	details.push_back(porsche);

	SportsCar dodge;
	dodge.set_numPassengers(3);
	dodge.set_temperature(18.0);
	details.push_back(dodge);

	
	SportsCar gtr;
	gtr.set_numPassengers(1);
	gtr.set_temperature(24.5);
	details.push_back(gtr);

	SportsCar shelby;
	shelby.set_numPassengers(5);
	shelby.set_temperature(15.1);
	details.push_back(shelby);

	for (int i=0; i<details.size(); i++)
	{
		cout <<" In position "<< i << " of the vector the number of passengers = " << details[i].get_numPassengers() << " " <<" and the temperature = "<< details[i].get_temperature() << endl;
	}
 
	return 0;

}

