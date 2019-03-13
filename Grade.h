#include <iostream>
#include <string>

using namespace std;

class Grade
	{
	public:
		Grade ();
		void setMark(int);
		int getMark();
		void setName(string);
		string getName();
	
	private:
		int mark;
		string name;
	};
		
		
	
