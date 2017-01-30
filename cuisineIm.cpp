#include <iostream>
#include <string>
#include"cuisine.h"
using namespace std;
cuisine::cuisine(string dish, int num)
{
   std::string dish_type;
   int num_of_dishes;
}
void cuisine::set_type_name(std::string dish)
{
   
   dish_type=dish;
}

void cuisine::set_dish_num(int num)
{
   num_of_dishes=num;
}

std::string cuisine::get_type_name()
{
   return dish_type;
}

int cuisine::get_dish_num()
{
   return num_of_dishes;
}

