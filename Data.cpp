#include <iostream>
#include "Data.h"

using namespace std;

<<<<<<< HEAD
	
	Data::Data()
	{ 
		x=0;
		y=0.0;
	}
	
	Data::Data(int a, float b)
	{
		x=a;
		y=b;
	}
	float Data::getY()
	{
		return y;
	}
	int Data::getX()
	{
		return x;
	}
	void Data::setX(int a)
	{
		x=a;
	}
	void Data::setY(float a)
	{
		y=a;
	}
	
=======

Data::Data()
{ 
x=0;
y=0.0;
}

Data::Data(int a, float b)
{
x=a;
y=b;
}
float Data::getY()
{
return y;
}
int Data::getX()
{
return x;
}
void Data::setX(int a)
{
x=a;
}
void Data::setY(float a)
{
y=a;
}
>>>>>>> 547a6a96dc42baee7b557cb48504f2d34b4d05b4
