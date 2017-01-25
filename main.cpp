#include "myClass.h"
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	myClass myVar;
	
	myVar.setNum(8);
	myVar.setChar('A');

	vector <myClass> myVec;  //creates vector to store variables of type "myClass"

	for(int i = 0; i < 4; i++)
	{
		myVec.push_back(myVar); //pushes variables into vector
	}
	
	for (int i = 0; i < 4; i++)
	{
		cout << myVec[i].getNum() << " " << myVec[i].getChar() << endl;         //prints two variables side by side (x4)
	}

}
