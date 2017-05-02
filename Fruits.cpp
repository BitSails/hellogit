/* Fruits.cpp Jan 25, 2017 */

#include "Fruits.h"
#include <iostream>
using namespace std;

	 	Fruits::Fruits()
		{
			fruitName = "Apples";
			fruitWeight = 5.0;
		}
	 	Fruits::Fruits(string name, double weight)
		{
	 		fruitName = name;
	 		fruitWeight = weight;
		}

	 	Fruits::~Fruits()
	 	{

	 	}

		string Fruits::getName()
		{
			return fruitName;
		}
		double Fruits::getWeight()
		{
			return fruitWeight;
		}

		void Fruits::setName(string n)
		{
			fruitName = n;
		}
		void Fruits::setWeight(double weight)
		{
			fruitWeight = weight;
		}
