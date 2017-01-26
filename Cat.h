#include <iostream>
#include <string>
using namespace std;
class Cat{
	public:
		Cat(){
			name=" ";
			age=0.00;
		}
		void setName (string catN){
			name=catN;
		}
		void setAge (float catAge){
			age=catAge;
		}
		string getName(){
			return name;
		}
		float getAge(){
			return age;
		}
	private:
		string name;
		float age;
};
