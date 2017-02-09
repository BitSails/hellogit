#include<iostream>
#include<string>
#include<vector>
#include "cuisine.h"
using namespace std;

int linearSearch(auto data, auto key)
{
	for (int i=0; i<data.size(); i++)
	{
		if (data[i].getdishNum==key)
		{
			return i;
		}
	}
	return -1;
}


int main()
{
   string dish;
   
   int num;
   int search_key;
   vector<cuisine> restaurant;
   cuisine order;

   for(int i=0;i<4;i++)
   {

      cout << "Please enter the type of cuisine." << endl;
   
      cin >> dish;

      order.settypeName(dish);

      cout << "Enter the number of dishes you have of this cuisine." <endl;

      cin >> num;
      
      order.setdishNum(num);

      restaurant.push_back(order);
   
      
   }
   cout <<" Enter an interger for a search key";
   cin >> search_key;
   
  cout << linearSearch(restaurant,search_key);
   
   /*for(int i=0;i<4;i++)
   {
       cout << restaurant[i].gettypeName() << ":" << restaurant[i].getdishNum() << endl;
   }*/
   
   return 0;

}

 
