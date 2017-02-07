#include <iostream>
#include <string>
#include "Fruits.h"
using namespace std;

Fruits::Fruits(string fruitName)
: name{fruitName}
{

}
int Fruits::getNumFruits()
{
	return numFruits;
}
void Fruits::setNumFruits()
{
	cout << "How many " << getName() << " are there?\n";
	cin >> numFruits;
}
void Fruits::setName(string fruitName)
{
	name = fruitName;
}
string Fruits::getName()
{
	return name;
}
