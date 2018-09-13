#include <iostream>
#include "Data.h"

using namespace std;


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

