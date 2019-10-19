#include<iostream>
#include<string>
#include<vector>
#include "Book.h"
using namespace std;

int linearSearch(auto data, auto key);

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
	
	
	

  string search_key, input;
  int result;
  cout<<"Enter a value to search for: ";
  cin>>search_key;
   while(search_key != "#")
    {
        result = linearSearch(stock,search_key);

        cout<<"  '"<<search_key<<"' was ";

        if (result == -1)
          cout<<"not found";
        else
          cout<<"found at index "<<result;


        cout<<endl<<endl<<"Enter a value to search for: ";
        cin>>search_key; 
    }
    return 0;
    
}
int linearSearch(auto data, auto key)
{
	for (int i=0;i < data.size();i++)
{
	if (data[i].getBookname == key){
	return i;}
	return -1;
}	

}
