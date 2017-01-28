/*
 * 		Fruits.h
 *  Jan 25, 2017
 * Author: Axum25
 */
#ifndef FRUITS_H_
#define FRUITS_H_
#include <string>
using namespace std;

class Fruits {
private:
	string fruitName;
	double fruitWeight;
	
public:
	Fruits();
	Fruits(string,double);

	~Fruits();

	string getName();
	double getWeight();

	void setName(string);
	void setWeight(double);
};

#endif
