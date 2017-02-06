#include "NumMan.h"

NumberManip::NumberManip() {
	num1 = 0;
	num2 = 0.0;
}

NumberManip::NumberManip(int number1, double number2){
	num1 = number1;
	num2 = number2;
}

int NumberManip::getSquare() {
	square = num1 * num1;
	return square;
}

double NumberManip::getAddition(){
	additionnum2 = num2 + num2;
	return addition;
}

void NumberManip::setSquareNum(int number1){
	num1 = number1;
}

void NumberManip::setAdditionNum(double number2){
	num2 = number2;
}
