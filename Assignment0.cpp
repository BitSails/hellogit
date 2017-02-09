#include <iostream>
#include <string>
#include <vector>
#include "NumMan.h"

using namespace std;

void SquareAndAddition(vector<NumberManip>&);
void printnumbers(vector<NumberManip>&);
int linearSearch(auto data, double key);

int main() {
	
	double search_key;
	int result;
	
	vector<NumberManip> NumManip;
	SquareAndAddition(NumManip);
	printnumbers(NumManip);
	
	cout<<"Enter a value to search for, enter -1 to exit.";

   cin>>search_key;
 
    while(search_key != -1)//perform searches until sentinel entered
    {
        result = linearSearch(NumManip,search_key);

        cout<<"  '"<<search_key<<"' was ";

        if (result == -1)
          cout<<"not found";
        else
          cout<<"found at index "<<result;


        cout<<endl<<endl<<"Enter a value to search for: ";
        cin>>search_key; 
    }
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
		cout << "Number when squared: " << ManipNumber[i].getSquare() << endl;
		cout << "Number when added to itself: " << ManipNumber[i].getAddition() << endl;
		
	}
}

int linearSearch(auto Data, double key)
{
	for(int i = 0; i < Data.size(); i++)
	{
		if (Data[i].getAddition() == key)
		{
			return i;
		}
	}	
	return -1;
}

