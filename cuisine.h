#ifndef CUISINE_H
#define CUISINE_H
#include<iostream>
#include<string>
using namespace std;

class cuisine{
  private:
    int num_of_dishes;
    std::string dish_type;
  public:
    cuisine(string="",int=0);

    void settypeName(string dish);
   
    void setdishNum(int num);
      
    std::string gettypeName();
    
    int getdishNum();
    
};//class
#endif
