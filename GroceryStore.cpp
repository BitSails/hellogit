/* GroceryStore.cpp Jan 25, 2017 */


#include <iostream>
#include "Fruits.h"
#include <string>
#include <vector>

using namespace std;

int linearSearch( auto data, auto key);

int  main()
{
vector <Fruits> Bags;


cout << "Bags needed four (4)"<<endl<<endl;

	string choice, search_key;
	double quantity;
	int result;

	cout << "Enter Fruit Name: ";
		cin >> choice;
	cout << "Enter Total Weight: ";
		cin >> quantity;

		cout << ""<<endl;

	Fruits Bag1(choice, quantity);
	Bags.push_back(Bag1);

	cout << "Enter Fruit Name: ";
			cin >> choice;

		cout << "Enter Total Weight: ";
			cin >> quantity;

			cout << ""<<endl;

		Fruits Bag2(choice, quantity);
		Bags.push_back(Bag2);

		cout << "Enter Fruit Name: ";
				cin >> choice;
			cout << "Enter Total Weight: ";
				cin >> quantity;

				cout << ""<<endl;

			Fruits Bag3(choice, quantity);
			Bags.push_back(Bag3);

			cout << "Enter Fruit Name: ";
					cin >> choice;
				cout << "Enter Total Weight: ";
					cin >> quantity;

					cout << ""<<endl;

				Fruits Bag4(choice, quantity);
				Bags.push_back(Bag4);

				cout<<"Fruits:"<<endl<<endl;

				cout << "Fruit Name: "<<Bag1.getName()<< "	Weight: "<<Bag1.getWeight()<<endl;
				cout << "\n";

				cout << "Fruit Name: "<<Bag2.getName()<< "	Weight: "<<Bag2.getWeight()<<endl;
				cout << "\n";

				cout << "Fruit Name: "<<Bag3.getName()<< "	Weight: "<<Bag3.getWeight()<<endl;
				cout << "\n";

				cout << "Fruit Name: "<<Bag4.getName()<< "	Weight: "<<Bag4.getWeight()<<endl;

cout << string(50, '\n');//clear screen

cout<<"Enter a class attribute to search for: ";

   cin>>search_key;

    while(search_key != "#")//perform searches until sentinel entered
    {
        result = linearSearch(Bags, search_key);

        cout<<"  \""<<search_key<<"\" was ";

        if (result == -1)
          cout<<"not found";
        else
          cout<<"found at index "<<result;


        cout<<endl<<endl<<"Enter a class attribute to search for: ";
        cin>>search_key;
    }

}

int linearSearch(auto data, auto key)
{

	cout<< "Search Key is \""<<key<<"\""<<endl;

		for (int i = 0; i < data.size(); i++)
	{
		if (data[i].getName == key)
		{
			return i;
		}
	}

	return -1;

}
