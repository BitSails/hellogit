#pragma once

#ifndef NUMBERMANIP_H
#define NUMBERMANIP_H

#include <iostream>
#include <string>
class NumberManip {

public:
	NumberManip();

	NumberManip(int, double);
	void setSquareNum(int);
	int getSquare();
	void setAdditionNum(double);
	double getAddition();

private:
	int num1;
	int square;
	double num2;
	double addition;
};

#endif
