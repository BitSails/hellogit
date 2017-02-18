#include <iostream>
#include <vector>
#include <string>
#include "Grade.h"

using namespace std;

int main()
{
	vector<Grade> gradeVector;
	Grade stu_1,stu_2,stu_3,stu_4;
	
	stu_1.setMark(50);
	stu_1.setName("Torian");
	gradeVector.push_back(stu_1);
	
	stu_2.setMark(60);
	stu_2.setName("Ahri");
	gradeVector.push_back(stu_2);
	
	stu_3.setMark(70);
	stu_3.setName("Zailley");
	gradeVector.push_back(stu_3);
	
	stu_4.setMark(80);
	stu_4.setName("Ti-Yoko");
	gradeVector.push_back(stu_4);
	
	for (unsigned int i=0; i < gradeVector.size();i++)
	{
		cout << gradeVector[i].getMark()<<" ";
		cout << gradeVector[i].getName()<<endl;
	}
	
	system("pause");
	return 0;
	}
	
