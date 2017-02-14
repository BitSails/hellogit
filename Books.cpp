#include "Books.h"
#include <string>
#include <vector>
using namespace std;

Books::Books()
{
	fee=0;
}

Books::Books(string member, int numDays)
{
	name=member;
	
	fee=numDays * 0.50;
}

void Books::setName(string member)
{
	name=member;
}

string Books::getName() const
{
	return name;
}


void Books::setFee(int numDays)
{
			
	fee=numDays * 0.50;
	
}

double Books::getFee() const
{
	return fee;	
}


