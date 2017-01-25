#include <iostream>
#include "myclass.cpp"
#include <string>
#include <vector>
using namespace std;

int main ()
{
	string name = "";
	int grade (0);
	vector <Class> Student (4);

	for (int i = 0; i<Student.size(); ++i)
	{
		if (i>0)
		{
			cin.ignore();
		}
		cout << "Please enter the name: ";
		getline (cin, name);
		Student[i].setName(name);
		cout << "Please enter the grade: ";
		cin >> grade;
		while ((grade<0) || (grade>100))
		{
			cout << "Please enter a value between 0 and 100: ";
			cin >> grade;
		}
		Student[i].setGrade(grade);
	}

	cout <<endl<<endl;

	for (int i = 0; i<Student.size(); ++i)
	{
		cout << "Name: " << Student[i].getName() << "\tGrade: " << Student[i].getGrade() << endl;;
	}

	cout <<endl;

	system("pause");
	return 0;
}
