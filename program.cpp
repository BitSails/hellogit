
// this is the client file called program.cpp
#include "SportsCar.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int linearSearch(auto data, auto key)//prototype
{
		for(int i=0; i<data.size(); i++)
		{
			if(data[i].get_numPassengers()==key)
				return i;
		}//end for loop

	return -1; //if key is not found

	}//end of linear search algorithm/function

int main()
{
	int passengers;
	float temp;
	vector<SportsCar> details;

	SportsCar porsche; // an object of type SportsCar called porshe
	porsche.set_numPassengers(4);
	porsche.set_temperature(16.5);
	details.push_back(porsche);
	
	porsche.set_numPassengers(3);
	porsche.set_temperature(18.0);
	details.push_back(porsche);
	
	porsche.set_numPassengers(1);
	porsche.set_temperature(24.5);
	details.push_back(porsche);

	porsche.set_numPassengers(5);
	porsche.set_temperature(15.1);
	details.push_back(porsche);

	for (int i=0; i<details.size(); i++)
	{
		cout <<" In position "<< i << " of the vector the number of passengers = " << details[i].get_numPassengers() << " " <<" and the temperature = "<< details[i].get_temperature() << endl;
	}
 
	int search_key;
	int result;
		
	cin>>search_key;
  
    while(search_key != -2)//perform searches until sentinel entered
    {
		for (int i= 0; i<details.size(); i++)
			result = linearSearch(details,search_key);
		
		
        cout<<"  '"<<search_key<<"' was ";

        if (result == -1)
          cout<<"not found";
        else
          cout<<"found at index "<<result;


        cout<<endl<<endl<<"Enter a value to search for: ";
        cin>>search_key; 
    }
 
	return 0;

}

