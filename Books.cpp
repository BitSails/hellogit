#include "Books.h"

void books::setbName(string x)
{
bName = x;
}
string books:: getbName()
{
return bName;
}
void books:: setprice (double y)
{
price =y;
}
double books:: getprice()
{
return price;
}
books::books ()	// Contructor - DO NOT RECREATE VARIABLE
{
bName = "";
price= 0.0; 
};
