#include <iostream>
#include <string>
using namespace std;
class Cat{
	public:
		Cat();
		
		void setName (string catN);
		void setAge (float catAge);
		string getName();
		float getAge();
	private:
		string name;
		float age;
};
