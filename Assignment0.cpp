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
	system("pause");
	return 0;

}



void squarevector(vector<NumberManip>& ManipNumber) {
	int number1;
	double number2;

	for (int i = 1; i <= 2; i++) {

		cout << "Please enter number 1 to be squared. " << endl;
		cin >> number1;
		cout << "Please enter number 2 to be added to itself. " << endl;
		cin >> number2;
		NumberManip newSquare(number1, number2);
		ManipNumber.push_back(newSquare);
		cout << endl;
	}
}

void printnumbers(vector<NumberManip>& ManipNumber) {

	int size = ManipNumber.size();
	for (int i = 0; i < size; i++) {
		cout << "Square Number: " << ManipNumber[i].getSquare() << endl;
		cout << "Number added to itself: " << ManipNumber[i].getAdd() << endl;

	}
}
