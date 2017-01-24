#include <string.h>
#include <iostream>
#include <vector>
#ifndef TEST_H
#define TEST_H
using namespace std;

class Test{
	private: 
		
		char cha;
		string stri;
		//vector <Pair> objVect (char, string);

	public:
		
		void setChar(char char1);
		char getChar();

		void setString (string sent);
		string getString();

		//void setRep(char ch, string strin);

		
		
		void setVect(char ch, string sent);
			Test();

};

#endif
