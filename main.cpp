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
	vector <myClass> myVec;
	

	for(int i = 0; i < 4; i++)
	{
		myVec.push_back(myVar);
	}
	
	for (int i = 0; i < 4; i++)
	{
		cout << myVec[i].getNum() << " " << myVec[i].getChar() << endl;
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
