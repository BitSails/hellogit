#ifndef BOOK_H
#define BOOK_H
#include<string>
class Book
{
	public:
	void setBookname(std::string n);
	void setAmount(int a);
	std::string getBookname();
	int getAmount();
	void displayInfo();
	
	private:
	int amount;
	std::string bookname;
};
#endif

	
