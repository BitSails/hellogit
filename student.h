// Lab 1

// header guard created to avoid multiple inclusion error
# ifndef STUDENT_H
# define STUDENT_H

#include <string>

// A simple class representing student information to demonstrate the use of Git
class Student{
	// class variables declared private by default, but declared for readability
	private:
        std::string student_Name = "";
		int student_Age =  0;

	// class prototype accesssor and mutator member functions declared public
	public:
		void set_StudentName(std::string name);
		std::string get_StudentName() const;
		void set_StudentAge(int age);
		int get_StudentAge() const;
};


# endif // end header guard declaration
