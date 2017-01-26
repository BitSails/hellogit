#include <iostream>
#include <vector>
#include "Cat.h"
using namespace std;

int main()
{
	Cat cats;
	vector<Cat>catVec;
	string catName;
	int catAge;

	for(int i=0;i<=3;i++)
	{
		cout<<"Please enter cat name and age \n";
		cin>> catName >> catAge;
		cats.setName(catName);
		cats.setAge(catAge);
		catVec.push_back(cats);
	}

	for(int i=0;i<=3;i++)
	{
		cout<<catVec[i].getName()<<"\t";
		cout<<catVec[i].getAge()<<"\n";
	}
	return 0;
}
