#include<iostream>
#include<string>
#include<vector>
#include "cuisine.h"
using namespace std;

int main()
{
   string dish;

   int num;

   vector<cuisine> restaurant;
   cuisine order;

   for(int i=0;i<4;i++)
   {

      cout << "Please enter the type of cuisine." << endl;
   
      cin >> dish;

      order.set_type_name(dish);

      cout << "Enter the number of dishes you have of this cuisine." <endl;

      cin >> num;
      
      order.set_dish_num(num);

      restaurant.push_back(order);
   
      //restaurant[i].set_type_name(dish);

      //restaurant[i].set_dish_num(num);
   }
   
   for(int i=0;i<4;i++)
   {
       cout << restaurant[i].get_type_name() << ":" << restaurant[i].get_dish_num() << endl;
   }
   
   return 0;

}

 
