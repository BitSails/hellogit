#include <iostream>
#include <string>
#include "test.h"
#include <vector>
using namespace std;

int main (){
	
	char xChar = 'c';
	string string1 = "";
	int xnum1 = 0;
	int xnum2 = 0;
	char xChar2 = 'p';
	char xChar3 = '\0';
	Test testObj; // object
	Test testObj2;
	Test testObj3;
	Test testObj4;
	vector <Test> objVect; 
	
	cout << "Enter 3 characters and a string: " << endl;
	cin >> xChar;
	cin >> xChar2;
	cin >> xChar3;
	cin >> string1;
	
	
	
	
	
	//testObj.setVect(xChar, string1, xnum1, xnum2);
	//objVect.push_back(testObj);
	
	testObj.setChar(xChar3);
	testObj2.setChar(xChar);
	testObj3.setVect(xChar, string1);
	testObj4.setChar(xChar2);
	
	objVect.push_back(testObj);
	objVect.push_back(testObj3);
	
	objVect.push_back(testObj2);
	objVect.push_back(testObj4);
	

	
	for(int x = 0; x < objVect.size(); x++) {
		
		cout << objVect[x].getString();
		

		cout << objVect[x].getChar() << endl;
	
	
		}
	
	}
