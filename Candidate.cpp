// IMPLEMENTATION FILE

#include "Candidate.h"
#include<iostream>
#include<string>

using namespace std;

Candidate::Candidate(string cand, int votes)
{
	candName = cand;
	numVotes = votes;
}

Candidate::Candidate()
{
	string candName;
	int numVotes{0};
}

//sets candidate name
void Candidate:: setCandName(string, cand)
{
	candName = cand;
}

//gets candidate name
string Candidate::getCandName()
{
	return candName;
}

//sets number of votes
void Candidate::setNumVotes(int votes)
{
	numVotes = votes;
}

//gets number of votes
int Candidate::getNumVotes()
{
	return numVotes;
}
