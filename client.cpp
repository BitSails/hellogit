#include <iostream>
#include <vector>
#include "Books.h"
#include <string>
using namespace std;

int linearSearch(auto data, auto key)   //prototype
{
	for (int i=0; i < data.size(); i++)
	{
		if (data[i].getbName() == key)
		{ 
			return i;
		}
	}	// end for
	return -1;
}

int main()
{
vector <books> Books (4);
string search_key;
string bName;
double price;
int result;

for (int i=0; i<4; i++)
{
cout << "Enter the Book Title:" << endl;
cin >> bName;
 while(bName != "#")	//read an unknown number of inputs from keyboard
    {
       Books.push_back(books);
       cin>>bName;
    }
    cout<<endl<<"["<<Books.size()<<" values read from input source]"<<endl<<endl;
    
//Books [i].setbName (bName);


// QUIT
if(Books.size() == 0)//no input
  {
      cout<<endl<<"No input received, quiting..."<<endl<<endl;
       exit(1);//nothing to do but quit program
  }

// INSERT SERACH KEY
  cout<<"Enter a value to search for: ";
   cin>>search_key;
   
//COMPARE SEARCH KEY W/ VECTORS   
while (search_key != "#")	// # of searches
{
	result = linearSearch (Books,search_key);		//vector books -> input bName

        cout<<"  '"<<search_key<<"' was ";

        if (result == -1)
          cout<<"not found";
        else
          cout<<"found at index "<<result;
          
          
cout<<endl<<endl<<"Enter a value to search for: ";
        cin>>search_key; 
        
     //   cout << "Price:" << endl;
//cin >> price;
//Books[i].setprice (price);
}
    }
cout << "Book Information: " << endl;
  for (int i=0; i<4; i++)
{
bName= Books[i].getbName();
price= Books[i].getprice();
cout << bName << " " << price << endl;
}
cin >> bName;
}
    

