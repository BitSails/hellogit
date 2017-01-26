#include<iostream>
#include<vector>
#include"Dress.h"
using namespace std;

int main()
{
	Dress products;
	vector<Dress>dressVec;
	int dressId;
	double dressPrice;

	for(int i=0;i<=4;i++)
	{
		cout<<"Please enter dress id and price\n";
		cin>> dressId, dressPrice;
		products.setId(dressId);
		products.setPrice(dressPrice);
		dressVec[i].push_back(products);
	}
	i=0;
	for(i=0;i<=4;i++)
	{
		cout<< dressVec[i].getId<<"\t";
		cout<< dressVec[i].getPrice<<"\n";
	}
	return 0;
}
