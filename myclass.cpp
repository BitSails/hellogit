#ifndef MYCLASS_CPP
#define MYCLASS_CPP
#include <iostream>
#include "class.h"
#include <string>
using namespace std;

Class::Class ()
{
  name = " ";
  grade = 0;
}

void Class::setName (string className)
{
  name = className;
}

void Class::setGrade (int classGrade)
{
  grade = classGrade;
}

string Class::getName ()
{
  return name;
}

int Class::getGrade ()
{
  return grade;
}

#endif

