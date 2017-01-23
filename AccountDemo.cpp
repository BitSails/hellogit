#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	
	vector <Account> V;

	Account Member;

	Member.setnewname("Cherese Sealy");
	Member.setnewaccount(1);
	Member.setnewbalance(45);
	V.push_back(Member);

	Member.setnewname("John Holder");
	Member.setnewaccount(2);
	Member.setnewbalance(100);
	V.push_back(Member);

	Member.setnewname("Stacy John");
	Member.setnewaccount(3);
	Member.setnewbalance(150);
	V.push_back(Member);

	Member.setnewname("Linda Mouse");
	Member.setnewaccount(4);
	Member.setnewbalance(400);
	V.push_back(Member);

	for (size_t n=0; n < V.size(); n++)
	cout << V[n] << " " << endl;

	return 0;
}

