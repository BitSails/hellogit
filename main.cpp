#include <iostream>
#include <string>
#include <vector>
#include "Winners.h"




using namespace std;
void fillvector(vector<Winners>&);
void printvector(vector<Winners>&);



int main(){
	vector<Winners> contestants;
	fillvector(contestants);
	printvector(contestants);

	system("pause");
	return 0;
}
void fillvector(vector<Winners>& newContestant){
	Winners contestants;
	string name;
	string search_key, input;
	int age;
	
	for (int i = 0; i < 4; i++){

		cout << "Enter the name of the contestant" << endl;
		cin >> name;
		contestants.setname(name);
		cout << " Enter the age of the contestant" << endl;
		cin >> age;
		contestants.setage(age);
		
		newContestant.push_back(contestants);
	}
		
}
void printvector(vector<Winners>& newContestant){

	for (unsigned int i = 0; i < 4; i++){
		cout << " Contestant name :" << newContestant[i].getname() << endl;
		cout << "Contestant age :" << newContestant[i].getage() << endl;
	}
}

