#include<string>

class Books
{
	public:
		Books()
		{
			fee=0;
		}


		void setName(string member)
		{
			name=member;
		}
	
		
		float getBalance(int numDays)
		{
			rate=0.10;
			fee=numDays * rate;
			return fee;
		}

	private:
		string name, float fee, float rate;
		
};
