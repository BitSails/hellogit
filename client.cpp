// CLIENT FUNCTIONS

#include "Candidate.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void addVector(vector<Candidate>&);
void printVector(vector<Candidate> &);

int linearSearch(auto data, auto key);//prototype

int linearSearch(auto data, auto key)
{
	for (int i=0; i < data.size(); i++)
	{
		if (data[i] == key)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	vector <Candidate> newCandidate; // vector declaration

	addVector(newCandidate);
	printVector(newCandidate);

	system("pause");

	return 0;
}

// add objects to vector 
void addVector(vector <Candidate> &newCandidate)
{
	std::string cand;
	int votes;

	for (int i = 0; i < 4; i++)
	{
		cout << "Enter Candidate's name: ";
		std::getline(cin>>ws,cand);

		cout << "Enter number of votes: ";
		cin >> votes;

		newCandidate.push_back(Candidate(cand, votes));

		cout << endl;
	}
}

//print contents of vector
void printVector(vector <Candidate> &newCandidate)
{
	for (size_t i = 0; i < newCandidate.size(); i++)
	{
		cout << "Candidate Name: " << newCandidate[i].getCandName() << endl;
		cout << "Number of Votes: " << newCandidate[i].getNumVotes() << endl;
	}
}
