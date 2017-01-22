#pragma once

#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>
#include <string>
class NumberManip {

public:
	NumberManip();

	NumberManip(int, double);
	void setNum(int);
	int getSquare();
	void setNum2(double);
	double getAdd();

private:
	int num1;
	int square;
	double num2;
	double newnum2;
};

#endif
