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

    void set_type_name(string dish);
   
    void set_dish_num(int num);
      
    std::string get_type_name();
    
    int get_dish_num();
    
};//class
#endif
