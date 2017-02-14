
#ifndef BOOKS_H
#define BOOKS_H

#include <iostream>
#include <string>

using namespace std;                                                            

class Books
{
	
	public:
		Books();

		Books(string, int);
		
		void setName(string);
		
		string getName() const;
		
		void setFee(int);
	
		double getFee() const;

		



	private:
		string name;
		double fee;
		
		
};

#endif
