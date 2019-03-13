#ifndef HOUSE_H
#define HOUSE_H
#include <iostream>
#include <string>
using namespace std;

class House
{
	private:
	string colour;
	int room;

	public:
	House ();
	void setColour (string);
	string getColour ();
	void setRoom (int);
	int getRoom ();
};
#endif
