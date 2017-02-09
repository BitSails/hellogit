#include "Rectangle.h"
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector <Rectangle> Vec;
	
	Rectangle sqr;//Object "sqr" with type Rectangle

	sqr.setLen(3);
	sqr.setWid(4.5);
	Vec.push_back(sqr);
	sqr.setLen(5);
	sqr.setWid(2.5);
	Vec.push_back(sqr);
	sqr.setLen(7);
	sqr.setWid(6.5);
	Vec.push_back(sqr);
	sqr.setLen(8);
	sqr.setWid(1.5);
	Vec.push_back(sqr);

	Vec[2].setLen(6);
	Vec[2].setWid(3.5);

	Vec.pop_back();

	for (int x=0; x< Vec.size();x ++)
	{
		cout << Vec[x].getLen() << " " << Vec[x].getWid();
	}
}

