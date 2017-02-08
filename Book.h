#include<iostream>
using namespace std;

#include<string>


class Book
{
	private:
int amount;
string bookname;

public()
{bookname=" ";
	amount=0;}
	
	void setBookname (string n)
	{bookname= n;}
	string getBookname()
	{return bookname;}
	
	void setAmount (int a)
	{amount =a;}
	int getAmount()
	{return amount;}
	
	void displayInfo()
	{cout<<"Title:"<<bookname<<endl;
		cout <<"Amount of books:"<<amount<<endl;
	}
};

	
	
	
	}
