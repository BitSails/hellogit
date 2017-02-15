#include<iostream>
#include<string>
#include<vector>
#include "Book.h"
using namespace std;

int main()
{
	string title;
	int amt;
	Book i;
	vector<Book>stock;
	for (int x=0;x<4; x++){
		cout<< "Enter book title and amount of books  ";
		cin>> title>>amt;
		
		i.setBookname(title);
		i.setAmount(amt);
		stock.push_back(i);
		}
	for (int y=0;y < 4;y++){
	stock[y].displayInfo();}
	
	return 0;
	
	
	}

