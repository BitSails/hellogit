#include <iostream>
#include <string>
#include "Books.h"
using namespace std;

int main()
{
	vector<Books>books;
	string member;
	int j;

	for (int x=0; x<4; x++)
	{
		cout<<"Please enter the members with overdue books";
		cin>>member;
		books[x].setName(member);

		cout<<"Please enter the number of days late";
		cin>>j;

		cout<<member<<"  "<<books[x].getBalance(j);
	}

	return 0;
}
