#include "Account.h"

using namespace std;

Account::Account()
{

	newaccount = 0;
	newblance = 0.0;
}

string Account::getName() const
{

	return newname;
}

int Account::getAccount() const
{

	return newaccount;
}

double Account::getBalance() const
{

	return newbalance;
}
void Account::setName(string name)
{

	newname = name;
}

void Account::setAccount(int account_number)
{

	newaccount = account_number;
}

void Account::setBalance(double balance)
{

	newbalance = balance;
}



