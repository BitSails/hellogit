#include <string>
using namespace std;

class Grades {

public:
	Grades(double classGrade, int numStudents) {
		setNum(numStudents);
		setGrade(classGrade);
		setAverage();
}

	void setNum(int numStudents) {
		num = numStudents;
	}

	int getNum() const {
		return num;
	}

	void setGrade(double classGrade) {
		sumGrade = classGrade;
	}

	double getGrade() const {
		return gradeSum;
	}

	void setAverage() {
		average = classGrade / numStudents;
	}

	double getAverage() const {
		return average;
	}

private:
	int num;
	double sumGrade;
	double average;
};
