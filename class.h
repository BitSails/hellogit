#ifndef CLASS_H
#define CLASS_H
#include <iostream>
#include <string>
using namespace std;

class Class
{
	private :
		string name;
		int grade;

	public :
		Class ();  
		
		void setName (string);

		void setGrade (int);
		
		string getName ();

		int getGrade ();
};

#endif
