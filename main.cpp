#include "myClass.h"
#include <vector>
#include <iostream>
#include <cstdlib>
using namespace std;

int linearSearch (auto data, auto key);

int main()
{
	myClass myVar;
	myVar.setNum(8);
	myVar.setChar('A');
<<<<<<< HEAD
	vector <myClass> myVec;
	
=======

	vector <myClass> myVec;  //creates vector to store variables of type "myClass"
>>>>>>> 4539bfc9d4bf8ec90dcc802b8ee0a805df06c6fb

	for(int i = 0; i < 4; i++)
	{
		myVec.push_back(myVar); //pushes variables into vector
	}
	
	for (int i = 0; i < 4; i++)
	{
		cout << myVec[i].getNum() << " " << myVec[i].getChar() << endl;         //prints two variables side by side (x4)
	}
	
	int key;
	int result;
    cin >> key;
    while (key != -1)
		{ 
      result = linearSearch(myVec, key);
      cout << " " << key << "was ";
      
      if (result == -1)
      {
		 cout << "not found.";
      }
      else
      cout << " found at index: " << result;
      
      cout << endl << endl;
      cout << "Please enter the search key: ";
      cin >> key;
		}
}
int linearSearch (auto myVec, auto key)
{
	for (int i = 0; i < myVec.size(); i++)
	{
		if (myVec[i].getNum() == key)
		{
		return i;
		}
	}
	return -1;
}
