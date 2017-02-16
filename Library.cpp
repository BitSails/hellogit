#include <iostream>
#include <vector> 
#include <string>
#include <iomanip>

#include "Books.h"

using namespace std;

int linearSearch(vector<Books>&, string);

int main()
{
	
	vector<Books>Obooks; //vector of object overdue books
	
	string member;
	int days,amt,num;

	cout<<"\nPlease enter the following information for overdue books";
	cout<<"\n How many late members are there? ";
	cin>>amt;

	for (int x=0; x<amt; x++)
	{
		cout<<"\nPlease enter member's name: ";
		cin>>member;
		
		cout<<"Please enter the number of days late: ";
		cin>>days;

		Books lateMembers(member,days);

		Obooks.push_back(lateMembers);

		cout<<endl;
	}
	cout<<endl;

	for (int x=0; x<amt; x++)
	{
		cout<<"Members with outstanding fees: "<<endl;
		cout<<Obooks[x].getName()<<" : $";
		cout<<fixed<<setprecision(2)<<Obooks[x].getFee();
		cout<<endl;
	}
	cout<<endl;
	
	string value;

	cout<<"Please enter a name to be searched(to end input,enter '!'):  ";
	cin>>value;

	while(value != "!")
	{
		num= linearSearch(Obooks,value);
    
		if (num==-1)
		 {
			cout<<"Name was not found"<<endl;
		}
		else
			cout<<"Name found at index: "<<num<<endl;

		cout<<"\nEnter a name to be searched for: ";
		cin>>value;
   
	}

	
	return 0;
}


int linearSearch (vector<Books>& Data, string key)
{
		for(unsigned int i=0; i<Data.size();i++)
		{
			if (Data[i].getName() == key)
			{
					return i;
			}
		}
	return -1;
}

