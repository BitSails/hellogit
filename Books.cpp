#include "Books.h"

void book::setbName(string x)
{
bName = x;
}
stringbook:: getbName()
{
return bName;
}
void book:: setprice (double y)
price =y;
}
double book:: getprice()
{
return price;
}
Books::Books ()	// Contructor - DO NOT RECREATE VARIABLE
{
bName = "";
price= 0.0; 
};
