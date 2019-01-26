#ifndef DATA_H
#define DATA_H

#include <iostream>
#include <vector>

using namespace std;

class Data
{
private:

int x;
float y;

public:

Data();
Data(int a, float b);
float getY();
int getX();
void setX(int a);
void setY(float a);


};

#endif
