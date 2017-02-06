#include <iostream>
#include <vector>
#include "Cat.h"
using namespace std;

int linearSearch(auto data, auto key)//prototype
{	
	for (int i=0; i < data.size(); i++)
	{
		if(data[i]==key)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	Cat cats;
	vector<Cat>catVec;
	string catName;
	int catAge;

	for(int i=0;i<=3;i++)
	{
		cout<<"Please enter cat name and age \n";
		cin>> catName >> catAge;
		cats.setName(catName);
		cats.setAge(catAge);
		catVec.push_back(cats);
	}

	for(int i=0;i<=3;i++)
	{
		cout<<catVec[i].getName()<<"\t";
		cout<<catVec[i].getAge()<<"\n";
	}
	return 0;
	
	
  vector<string> inputs;
  string search_key, input;
  int result;

   cout<<"Welcome to \"search it\". We first need some input data."<<endl;
   cout<<"We'll assume the inputs do not have any spaces."<<endl<<endl;
   cout<<"To end input type the #-character (followed by Enter)"<<endl<<endl;

   cin>>input;
 
    while(input != "#")//read an unknown number of inputs from keyboard
    {
       inputs.push_back(input);
       cin>>input;
    }

   cout<<endl<<"["<<inputs.size()<<" values read from input source]"<<endl<<endl;

  if(inputs.size() == 0)//no input
  {
      cout<<endl<<"No input received, quiting..."<<endl<<endl;
       exit(1);//nothing to do but quit program
  }
 
   cout<<endl<<"To end input type the #-character (followed by Enter)"<<endl<<endl;
  cout<<"Enter a value to search for: ";


   cin>>search_key;
 
    while(search_key != "#")//perform searches until sentinel entered
    {
        result = linearSearch(inputs,search_key);

        cout<<"  '"<<search_key<<"' was ";

        if (result == -1)
          cout<<"not found";
        else
          cout<<"found at index "<<result;


        cout<<endl<<endl<<"Enter a value to search for: ";
        cin>>search_key; 
    }

   cout<<endl<<"Program \"search it\" is now finished."<<endl<<endl;

    return 0;
}

