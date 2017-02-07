#ifndef FRUITS_H
#define FRUITS_H

class Fruits
{
public:
	explicit Fruits(std::string fruitName);
	int getNumFruits();
	void setNumFruits();
	void setName(std::string fruitName);
	std::string getName();
private:
	int numFruits;
	std::string name;
};
#endif
