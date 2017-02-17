#include "Winners.h"
#include <string>
#include <iostream>

using namespace std;

Winners::Winners(){

	name = " ";
	age = 0;

}

void Winners::setname(string a){

	name = a;


}

void Winners::setage(int b){
	age = b;
}

string Winners::getname(){
	return name;
}

int Winners::getage(){
	return age;
}
