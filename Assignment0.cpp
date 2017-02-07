#include <iostream>
#include <string>
#include <vector>
#include "NumMan.h"

using namespace std;

void SquareAndAddition(vector<NumberManip>&);
void printnumbers(vector<NumberManip>&);

int main() {
	
	vector<NumberManip> NumManip;
	SquareAndAddition(NumManip);
	printnumbers(NumManip);
	return 0;

}

void SquareAndAddition(vector<NumberManip>& ManipNumber) {
	
		NumberManip val1;
		val1.setSquareNum(20);
		val1.setAdditionNum(2.3);
		ManipNumber.push_back(val1);
		
		val1.setSquareNum(4);
		val1.setAdditionNum(5.5);
		ManipNumber.push_back(val1);
	
}

void printnumbers(vector<NumberManip>& ManipNumber) {

	int size = ManipNumber.size();
	for (int i = 0; i < size; i++) {
		cout << "Square Number: " << ManipNumber[i].getSquare() << endl;
		cout << "Addition Number: " << ManipNumber[i].getAddition() << endl;
		
	}
}
