#include <iostream>
#include <string>
#include <vector>
using namespace std;

class phone{
private:
string phoneType;
double phoneCost;

  
public:
phone (string = "", double = 0.0);
  void setPhoneType(string n);
  string getPhoneType();
  void setPhoneCost(double c);
  double getPhoneCost(); 
  void outputMessage();
};
