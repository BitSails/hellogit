#include <iostream>
#include <string>
#include <vector>
#include "Winners.h"




using namespace std;
void fillvector(vector<Winners>&);
void printvector(vector<Winners>&);
int linearSearch(vector<Winners> contestants, string key);//prototype



int main(){
	int result;
	string search_key, input;
	vector<Winners> contestants;
	fillvector(contestants);
	printvector(contestants);
	cout << "To end input type the #-character (followed by Enter)" << endl;
	 cout << "Enter a value to search for: " ;


	 cin >> search_key;

	 while (search_key != "#")//perform searches until sentinel entered
	 {
		 result = linearSearch(contestants, search_key);

		 cout << "  '" << search_key << "' was ";

		 if (result == -1){
			 cout << "not found";
		 }
		 else {
			 cout << "found at index " << result << endl;
		 }
	 
		 
		 


		 cout << "Enter a value to search for: " << endl;
		 cin >> search_key;
	 }

	 cout << "Program \"search it\" is now finished."  << endl;





cout << "Program \"search it\" is now finished." << endl;


	
	

	//system("pause");
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
int linearSearch(vector<Winners> win, string key)
{
for(int i = 0; i < win.size(); i++)
{
if (win[i].getname() == key)//we found it
{
return i;//return its location
}
}//end for
return -1;}//element not found

