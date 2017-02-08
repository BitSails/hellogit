// CLIENT FUNCTIONS

#include "Candidate.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void addVector(vector<Candidate>&);
void printVector(const vector<Candidate> &);

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
	vector <Candidate> newCandidate(4);

	addVector(newCandidate);
	printVector(newCandidate);

	return 0;
}


// add objects to vector
void addVector()
{
	vector<Candidate> newCandidate;
	string cand;
	int votes;
	
	for (int i = 0; i < newCandidate.size(); i++)
	{
		cout << "Enter Candidate Name: ";
		cin >> cand;

		cout << "Enter Number of Votes: ";
		cin >> votes;

		Candidate newCandidate(cand, votes);
		newCandidate.push_back(cand, votes);
		cout << endl;
	}
}


//print contents of vector
void printVector(const vector<Candidate> newCandidate)
{
	for (int i = 0; i < newCandidate.size(); i++)
	{
		cout << "Candidate Name: " << newCandidate[i].getCandName() << endl;
		cout << "Number of Votes: " << newCandidate[i].getNumVotes() << endl;
	}
}




