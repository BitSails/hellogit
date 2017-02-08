#include <iostream>
#include <vector>
#inlcude "Header.h"
using namespace std;

phone::Phone (string n , double c){
phoneType= n;
phoneCost= c;
}

void phone::setPhoneType(string n){
  phoneType=n;
  }
  
  string phone::getPhoneType(){
  return phoneType;
  }
  
  void phone::setPhoneCost(double c){
  phoneCost= c;
  }
  
  double phone::getPhoneCost(){
  return phoneCost;
  }
  
  void phone::outputMessage(){
  cout << "Your choice of phone: " << phoneType << endl;
  cout<< "The accompanied cost is: " << phoneCost << endl;
  }
