#include <iostream>
#include <vector>
#include "Data.h"

using namespace std;

class Data
{
	
	public:
	
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
	Data::float getY()
	{
		return y;
	}
	Data::int getX()
	{
		return x;
	}
	Data::void setX(int a)
	{
		x=a;
	}
	Data::void setY(float a)
	{
		y=a;
	}
	
};
