#include <string.h>
#include "test.h"
#include <iostream>

Test::Test(){
char char1 = '\0';
string sent = "";
string stri = "";
char cha = '\0';
int number1 = 0;
int number2 = 0;


}


void  Test::setChar(char char1) {
	
		cha = char1;
	}
	
char Test::getChar(){
		return cha;

	}


void Test::setString(string sent) {
	
		stri = sent;
	}
	
string Test::getString(){
		return stri;

	}



void Test::setVect(char ch, string sent){
	cha = ch;
	stri = sent;

	}


