#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "House.h"

int main()
{
	vector<House>D;
	House design;
	design.setColour("yellow");
	design.setRoom(6);
	D.push_back(design);
	design.setColour("blue");
	design.setRoom(9);
	D.push_back(design);
	design.setColour("orange");
	design.setRoom(7);
	D.push_back(design);
	design.setColour("white");
	design.setRoom(6);
	D.push_back(design);
	for(int i=0;i<D.size();i++)
	{
		cout<<"Colour of house: "<<D[i].getColour()<<" and number of rooms in house: "<<D[i].getRoom()<<endl;
	}
}

