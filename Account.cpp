#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

Account::Account( )
{
	name = "";
	acct_num = 0;
}
void Account::setName (string accountName)
{
	name = accountName;
}
string Account:: getName ( )
{
	return name;
}
void Account::setNum (int a)
{
	acct_num = a;
}
int Account::getNum ( )
{
	return acct_num;
}

