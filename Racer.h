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
	Racer(const string & name, const string & category) 
		:racerName(name), racerCategory(category){
	}
	
	//function to set the Racer name
	void setRacerName(const string & name){
		racerName = name; //Stores the Racer's full name
	}

	//function to set the Racer's Category
	void setRacerCategory(const string & category){
		racerCategory = category;
	}

	//function to retrieve the Patient name
	const string & getRacerName() const {
		return racerName;
	}

	//function to retrieve the Patient's Id
	const string & getracerCategory() const {
		return racerCategory;
	}	
	
private:
	string racerName;
	string racerCategory;	
};
