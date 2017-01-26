#include<iostream>


class Dress{
public:
	void setId(int dressId)
	{
		id=dressId;
	}
	int getId()
	{
		return id;
	}
	void setPrice(double dressPrice)
	{
		price=dressPrice;
	}
	double getPrice() 
	{
		return price;
	}
private:
	int id;
	double price;
};
