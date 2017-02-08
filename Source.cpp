#include <iostream>
#include <string>
#include <vector>
#include "Phone.h" 
using namespace std;

int linearSearch(auto data, auto key);

int main(){
	string type;
	string search_key;
    double cost;
    int answer;

 
	vector <phone> myPhone;
	cout<<"Enter a brand of phone" ;
	cin>>type;
	myPhone.push_back(type);
	
	while (type != "#"){
		myPhone.push_back(type);
		cin>>type;
	}
	
	cout<< "Number of types entered ="<<myPhone.size()<<endl;
	cout<<" Enter search key:";
	cin>>search_key;
	
	while(search_key != "#")
    {
        answer = linearSearch(type,search_key);

        cout<<"  '"<<search_key<<"' was ";

        if (answer == -1)
          cout<<"not found";
        else
          cout<<"found at index "<<answer;


        cout<<endl<<endl<<"Enter a value to search for: ";
        cin>>search_key; 
    }

	
	
/*
cout<<"My vector contains:"<<myPhone.size();
*/
}

int linearSearch(auto Data, auto key){
	  for (int i=0; i<Data.size(); i++){
		  if (Data[i]==key){
			  return i;
			  }
		  }
		  return -1;
	  }
 
 
  

