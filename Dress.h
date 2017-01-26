Class Dress;
public:
	void setId(int dressId)
	{
		id=dressId;
	}
	int getId()const;
	{
		return id;
	}
	void setPrice(double dressPrice)
	{
		price=dressPrice;
	}
	double getPrice() const;
	{
		return price;
	}
private:
	int i;
	double price;
};
