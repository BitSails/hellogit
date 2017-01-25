#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <string>
using namespace std;

class Account 
{
	private:
	    string name;
	    int acct_num;

	public:
		   Account ( );
	       void setName (string);
	       string getName ( );
     	   void setNum (int);
		   int getNum ( );
};
#endif

