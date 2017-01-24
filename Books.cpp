#include "Books.h"
#include <string>

Books:: Books()
{
	fee=0;
}

void Books::setName(string member)
{
	name=member;
}

string Books::getName()
{
	return name;
}


void Books::setFee(int numDays)
{
			
	fee=numDays * 0.1;
	
}

float Books::getFee()
{
	return fee;	
}
