#include "Account.cpp"
#include <iostream>
#include <vector>

using namespace std;

int main( )
{
	Account myAccount;
	vector <Account> acctList;
	
	   myAccount.setName ("Bob");
	   myAccount.setNum (12);
	acctList.push_back (myAccount);
	  myAccount.setName ("Tim");
  	   myAccount.setNum (10);
	acctList.push_back(myAccount);
	   myAccount.setName ("Rich");
	   myAccount.setNum (35);
	acctList.push_back (myAccount);
	   myAccount.setName ("Chris");
	   myAccount.setNum (66);
	acctList.push_back (myAccount);

	for (int i = 0;  i < acctList.size ( );   i++)
	 {
		cout << acctList[i].getName()<< "" << acctList[i].getNum ();
		
	 }

}

