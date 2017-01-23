#include <iostream>
#include <string>

using namespace std;

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
	
	//Member Variables
	string newname;
	int newaccount;
	double newbalance;

	public:
	
	//Default Constructor 
	Account();

	//Accessor Functions

	string getName() const;
	int getAccount() const;
	double getBalance() const;

	//Mutator Functions

	void setName(string);
	void setAccount(int);
	void setBalance(double);

};
#endif

