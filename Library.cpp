#include <iostream>
#include <string>
#include "Books.h"
#include <vector>
using namespace std;

int main()
{
	
	vector<Books>books;
	Books member;
	string member;
	int j;

	for (int x=0; x<4; x++)
	{
		cout<<"Please enter the members with overdue books";
		cin>>member;
		//books[x].setName(member);
		books.push_back(books);
		
		cout<<"Please enter the number of days late";
		cin>>j;

		books[x].setFee(j);
		//books.push_back(j);
	}

	for (int x=0; x<4; x++)
	{
		cout<<books[x].getName()<<" "<<books[x].getFee();
	}

/*
    int num =linearSearch(books,"Trees");
    if (num==-1)
    {
			cout>>"key was not found">>endl;
	}
	else
		cout>>"key found at">> num;
    */
	return 0;
}

/*
int linearSearch (auto Data,auto key)
{
		for(int i=0; i<Data.size();i++)
		{
			if (Data[i]== key)
			{
					return i;
			}
		}
	return -1;
}
*/
