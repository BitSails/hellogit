#ifndef AVERAGE_H
#define AVERAGE_H
 
class Average {
     
public:
    Average();
     
    void setGrade(double);
    double getGrade();
     
    void setNum(int);
    int getNum();
     
    void setAverage(int, double);
    double getAverage();
     
private:
    int num;
    double grade;
    double average;
};
#endif
