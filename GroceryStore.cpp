/* GroceryStore.cpp Jan 25, 2017 */


#include <iostream>
#include "Fruits.h"
#include <string>
#include <vector>
using namespace std;

int  main()
{
vector <Fruits> Bags;

cout << "Bags needed four (4)"<<endl;

	string choice;
	double quantity;

	cout << "Enter Fruit Name";
		cin >> choice;
	cout << "Enter Total Weight";
		cin >> quantity;

	Fruits Bag1(choice, quantity);
	Bags.push_back(Bag1);

	cout << "Enter Fruit Name";
			cin >> choice;
		cout << "Enter Total Weight";
			cin >> quantity;

		Fruits Bag2(choice, quantity);
		Bags.push_back(Bag2);

		cout << "Enter Fruit Name";
				cin >> choice;
			cout << "Enter Total Weight";
				cin >> quantity;

			Fruits Bag3(choice, quantity);
			Bags.push_back(Bag3);

			cout << "Enter Fruit Name: ";
					cin >> choice;
				cout << "Enter Total Weight: ";
					cin >> quantity;

				Fruits Bag4(choice, quantity);
				Bags.push_back(Bag4);

				cout<<"Fruits:"<<endl;

				cout << "Fruit Name: "<<Bag1.getName()<< "	Weight: "<<Bag1.getWeight()<<endl;
				cout << "\n";

				cout << "Fruit Name: "<<Bag2.getName()<< "	Weight: "<<Bag2.getWeight()<<endl;
				cout << "\n";

				cout << "Fruit Name: "<<Bag3.getName()<< "	Weight: "<<Bag3.getWeight()<<endl;
				cout << "\n";

				cout << "Fruit Name: "<<Bag4.getName()<< "	Weight: "<<Bag4.getWeight()<<endl;

				}

