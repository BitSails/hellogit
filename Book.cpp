#include<iostream>
#include<string>
#include "Book.h"
	
using namespace std;

string Book::getBookname()
{return bookname;
}

int Book::getAmount()
	{return amount;}
	
void Book::setBookname (string n)
	{bookname= n;}
	
void Book::displayInfo()
	{cout<<"Title:"<<bookname<<endl;
		cout <<"Amount of books:"<<amount<<endl;
	}	
void Book::setAmount (int a)
	{amount =a;}
	
