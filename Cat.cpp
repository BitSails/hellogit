#include <iostream>
#include <vector>
#include "Cat.h"
using namespace std;

Cat::Cat(){
			name=" ";
			age=0.00;
		}
		void Cat::setName (string catN){
			name=catN;
		}
		void Cat::setAge (float catAge){
			age=catAge;
		}
		string Cat::getName(){
			return name;
		}
		float Cat::getAge(){
			return age;
		}


