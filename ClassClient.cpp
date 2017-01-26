#include <iostream>
#include <string>
#include "Clientinfo.h"
#include <vector>
using namespace std;

int main ()
{
	vector <Clientinfo> Cinfo;
	Clientinfo client;
	string name;
	int i, age;

	for (int i = 0; i < 4; i++)
	{
		cout << "Enter name of client" << i+1 << ": ";
		cin >> name;
		client.setname(name);
		cout << "Enter age of client " << i+1 << ": ";
		cin >> age;
		client.setage(age);
		Cinfo.push_back(client);
	}

	for (int i = 0; i < 4; i++)
	{
		cout << "Client's " << i+1 << " name is " << Cinfo[i].getname;
		cout << " and he/she is " << Cinfo[i].getage << " years old." << endl;
	}
	return 0;
}
