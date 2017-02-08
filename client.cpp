#include <iostream>
#include "myclass.cpp"
#include <string>
#include <vector>
using namespace std;

int linearSearch(auto data, auto key);

int main ()
{
	string name = "";
	string search_key;
	//int grade (0);
	int result = 0;
	vector <Class> Student (8);

	for (int i = 0; i<Student.size(); ++i)
	{
		/*if (i>0)
		{
			cin.ignore();
		}*/
		cout << "Please enter the name: ";
		getline (cin, name);
		Student[i].setName(name);
		/*cout << "Please enter the grade: ";
		cin >> grade;
		while ((grade<0) || (grade>100))
		{
			cout << "Please enter a value between 0 and 100: ";
			cin >> grade;
		}
		Student[i].setGrade(grade);*/
	}

	cout<<endl<<"["<<Student.size()<<" values read from input source]"<<endl<<endl;

	/*for (int i = 0; i<Student.size(); ++i)
	{
		cout << "Name: " << Student[i].getName() << "\tGrade: " << Student[i].getGrade() << endl;;
	}

	cout <<endl;*/
	
	cout<< "Enter a value to search for: ";
	cin >> search_key;
	
	result = linearSearch(Student, search_key);
    cout<<"  '"<<search_key<<"' was ";
    if (result == -1)
		cout<<"not found";
    else
        cout<<"found at index "<<result<<endl<<endl;
	

	system("pause");
	return 0;
}

int linearSearch(auto data, auto key)
{
	for (int i=0; i<data.size(); ++i)
	{
		if (data[i].getName()==key)
			return i;
	}
	return -1; //not found
}
