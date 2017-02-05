#include "Average.h"
 
Average::Average() {
    num = 0;
    grade = 0.0;
    average = 0.0;
}
 
void Average::setGrade(double classGrade) {
    grade = classGrade;
}
 
double Average::getGrade() {
    return grade;
}
 
void Average::setNum(int numStudents) {
    num = numStudents;
}
 
int Average::getNum() {
    return num;
}
 
void Average::setAverage(int num, double grade) {
    average = grade / num;
}
 
double Average::getAverage() {
    return average;
}
