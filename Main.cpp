#include "Account.cpp"
#include <iostream>
#include <vector>

using namespace std;

int linearSearch(auto data, auto key)
 {
    for (int i=0; i<data.size(); i++)
    {
		if (data[i].getNum()==key)
		{
			return i;
		}
	} //end for 
	
	return -1; //not found 
 }

int main( )
{
	int result = 0;
	int search_key = 0;
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

	/*for (int i = 0;  i < acctList.size ( );   i++)
	 {
		cout << acctList[i].getName()<< "" << acctList[i].getNum ();
		
	 }*/
	 
	 cout << "Enter search key: ";
	 cin >> search_key;
	 
	 result = linearSearch(acctList, search_key);
	 
	 if (result == -1)
          cout<<"not found";
        else
          cout<<"found at index "<<result<<endl<<endl;
	
}

