//Racer Class
#include<string>
#include<array>
#include<iostream>
#include<iomanip>
using namespace std;

//Racer class definition

class Racer
{
public:
	//constructor initializing Racer's names and Racer's Category
	Racer(const string & name, const int & category); 		
	
	//function to set the Racer name
	void setRacerName(const string & name);

	//function to set the Racer's Category
	void setRacerCategory(const int & category);

	//function to retrieve the Patient name
	const string & getRacerName() const ;
	}

	//function to retrieve the Patient's Id
	const int & getracerCategory() const ;
	
private:
	string racerName;
	int racerCategory;	
};
