#include <iostream>
#include <string>
#include <vector>
#include "Header.h" 
using namespace std;

int main(){
  string type;
  double cost;
/*
  phone Apple;  
  phone Samsung;
  phone Huawei;
  phone Htc;
  phone myPhone;
*/
 
  vector <phone> myPhone/*(iPhone, Htc, Samsung , Huawei)*/;
	cout<<"Enter a brad of phone" ;
	cin>>type;
	myPhone.push_back(type);
/*
cout<<"My vector contains:"<<myPhone.size();
*/
}

int linearSearch(auto Data, auto key){
	  for (int i=0; i<Data.size(); i++){
		  if (Data[i]==key){
			  return i;
			  }
		  }
		  return -1;
	  }
 
 
  

