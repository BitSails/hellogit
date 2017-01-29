#include<iostream>
#include<string>
#include<vector>
#include "cuisine.h"
using namespace std;

int main()
{
   sting dish;

   int num;

   vector<cuisine> restaurant;

   for(int i=0;i<4;i++)
   {

      cout << "Please enter the type of cuisine and the number of dishes you have of this cuisine."

      cin >> dish >> num;
   
      restaurant[i].set_type_name(dish);

      restaurant[i].set_dish_num(num);
   }
   
   for(int i=0;i<4;i++)
   {
       cout << client[i].get_type_name() << ":" << client[i].get_dish_num() << endl;
   }
   
   return 0;

}

 
