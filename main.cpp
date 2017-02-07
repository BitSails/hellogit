#include <iostream>
#include <vector>
#include "Fruits.h"
using namespace std;

int main ()
{
	vector<int> myVector;
	Fruits fruit1{"oranges"};
	Fruits fruit2{"bananas"};
	Fruits fruit3{"apples"};
	Fruits fruit4{"mangoes"};
	fruit1.setNumFruits();
	myVector.push_back(fruit1.getNumFruits());
	fruit2.setNumFruits();
	myVector.push_back(fruit2.getNumFruits());
	fruit3.setNumFruits();
	myVector.push_back(fruit3.getNumFruits());
	fruit4.setNumFruits();
	myVector.push_back(fruit4.getNumFruits());
	cout << "Fruits will be taken out\n";
	myVector.pop_back();
	myVector.pop_back();
	myVector.pop_back();
	cout << "How many fruits are there now?\n";
	for(int x=0; x<myVector.size(); x++)
	{
		cout << myVector[x] << " " << fruit1.getName() << endl;
	}
	return 0;
}
