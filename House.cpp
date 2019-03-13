#include <iostream>
#include <string>
using namespace std;
#include "House.h"

House::House()
{
	colour = "";
	room = 0;
}

void House::setColour(string x)
{
	colour = x;
}

string House::getColour()
{
	return colour;
}

void House::setRoom(int v)
{
	room = v;
}

int House::getRoom()
{
	return room;
}
