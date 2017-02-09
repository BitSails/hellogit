#include <iostream>
#include <string>
#include"cuisine.h"
using namespace std;
cuisine::cuisine(string dish, int num)
{
   std::string dish_type;
   int num_of_dishes;
}
void cuisine::settypeName(std::string dish)
{
   
   dish_type=dish;
}

void cuisine::setdishNum(int num)
{
   num_of_dishes=num;
}

std::string cuisine::gettypeName()
{
   return dish_type;
}

int cuisine::getdishNum()
{
   return num_of_dishes;
}

