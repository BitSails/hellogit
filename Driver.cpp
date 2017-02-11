#include <iostream>
#include "Average.h"
#include <string>
#include <vector>
using namespace std;
 
int linearSearch(auto data, auto key);
 
int main() {
     
    Average object;
    vector <Average> v;
     
    object.setGrade(350);
    object.setNum(10);
    object.setAverage(10, 350);
    v.push_back(object);
    object.setGrade(450);
    object.setNum(20);
    object.setAverage(20, 450);
    v.push_back(object);
    object.setGrade(275);
    object.setNum(15);
    object.setAverage(15, 275);
    v.push_back(object);
    object.setGrade(600);
    object.setNum(25);
    object.setAverage(25, 600);
    v.push_back(object);
     
    cout << " Class Grade     " << " Number of Students     " << " Average " << endl;
    for (int x = 0; x < v.size(); x++) {
        cout << "     " << v[x].getGrade() << "                 " << v[x].getNum() << "                 " << v[x].getAverage();
        cout << endl;
    }
    //system("Pause");
    return 0;
}

int linearSearch (auto data, auto grade) {
	for (int i = 0; i < data.size(); i++) {
		if (data[i].getGrade() == grade) {
			return i;
		}
	}
	return -1;
}
