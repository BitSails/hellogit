#include <iostream>
#include <vector>
#include "Books.h"
#include <string>
using namespace std;

int main()
{
vector <book> Books (4);
string bName;
double price;
for (int=0; i<4; i++)
{
cout << "Book Title:" << endl;
cin >> bName;
Books [i].setbName (bName);
cout << "Price:" << endl;
cin >> price;
Books[i].setprice (price);
}
cout << "Book Information: " << endl;
for (int i=0; i<4; i++)
{
bName= Books[i].getbName();
price= Books[i].getprice();
cout << bName << " " << price << endl;
}
cin >> bName;
}
