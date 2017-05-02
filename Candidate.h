#ifndef CANDIDATE_H
#define CANDIDATE_H
#include <string>

class Candidate
{
	private:
		std::string candName;
		int numVotes;

	public:
		//default constructor
		Candidate()
		{
			candName = " ";
			numVotes = 0;
		}

		Candidate(std::string, int);
		std::string getCandName();
		int getNumVotes();
		void setCandName(std::string cand);
		void setNumVotes(int votes);
};
#endif
