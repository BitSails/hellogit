
//this is the implementation file called SportsCar.cpp

#include<iostream>
#include"SportsCar.h"

SportsCar::SportsCar(int x, float y)
{
	numPassengers=x;
	temperature=y;
}

void SportsCar::set_numPassengers(int x)
{
	numPassengers=x;
}

int SportsCar::get_numPassengers()
{
	return numPassengers;
}

void SportsCar::set_temperature(float y)
{
	temperature= y;
}

float SportsCar::get_temperature()
{
	return temperature;
}



