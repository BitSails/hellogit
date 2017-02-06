#include <iostream>
#include <string>
#include <vector>
#include "NumMan.h"

using namespace std;

void squarevector(vector<NumberManip>&);
void printnumbers(vector<NumberManip>&);

int main() {

	vector<NumberManip> NumManip;
	squarevector(NumManip);

	printnumbers(NumManip);
	return 0;

}



void squarevector(vector<NumberManip>& ManipNumber) {
	int number1;
	double number2;
	
	
		NumberManip.setSquareNum(20);
		NumberManip.setAdditionNum(2.3);
		NumManip.push_back(NumberManip);
		
		NumberManip.setSquareNum(4);
		NumberManip.setAdditionNum(5.5);
		NumManip.push_back(NumberManip);
		cout << endl;
	}
}

void printnumbers(vector<NumberManip>& ManipNumber) {

	int size = ManipNumber.size();
	for (int i = 0; i < size; i++) {
		cout << "Square Number: " << ManipNumber[i].getSquare() << endl;
		cout << "Addition Number: " << ManipNumber[i].getAdd() << endl;


}
