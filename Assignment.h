#ifndef Assignment_h
#define Assignment_h   
#include <iostream>

using namespace std;
   
   class Birthday{
		
		private: 
		 string month;
		 int year, day;
		
		public:
		   Birthday(int d, string m, int y){
		    day = d;
		    month = m;
		    year = y;
		  }
		
		int getDay(){
			return day; 
		 }
		
		void setDay(int d){
			int day = d;
		 }
		string getMonth(){
			return month;
		 }
		
		void setMonth(string m){
			month = m;
		 }
		
		int getYear(){
			return year;
		 }
		
		void setYear(int y){
			int year = y;
		 }
		};//End of Class
	#endif	
		
