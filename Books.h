#include<string>
using namespace std;


class Books
{
	public:
		Books();
		
		void setName(string);
		
		string getName();
		
		void setFee(int);
	
		float getFee();

		


		

	private:
		string name;
		float fee;
		
		
};
