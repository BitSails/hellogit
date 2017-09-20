//client 
#include <iostream>
#include <vector>
#include "Assignment.h"

using namespace std;

int main ()
	{	Birthday bDay = {15, "November", 2013};
		
		
		vector <Birthday> v1 = {
			{12, "Nov", 1996},
			{9, "Aug", 1727},
			{21, "Mar", 1897},
			{15, "Apr", 1937},
	//{bDay.setDay(5), bDay.setMonth("Nov"), bDay.setYear(97)}
	//{bDay.setDay(1), bDay.setMonth("Dec"), bDay.setYear(95)},
	//{bDay.setDay(2), bDay.setMonth("Jan"), bDay.setYear(98)},
	//{bDay.setDay(3), bDay.setMonth("Feb"), bDay.setYear(99)},
	};
	 v1.push_back({14, "Aug", 96});
	 for ( int p = 0; p < v1.size(); p++)
	 {
	 cout << v1[p].getDay() << " " << v1[p].getMonth()<< " " << v1[p].getYear() << endl;
 }
	 //cout << bDay.getDay() << " " << bDay.getMonth()<< " " << bDay.getYear() << endl;
	 //cout << bDay.getDay() << " " << bDay.getMonth()<< " " << bDay.getYear() << endl;
	 //cout << bDay.getDay() << " " << bDay.getMonth()<< " " << bDay.getYear() << endl;
	 return 0;
	}//End of Main
