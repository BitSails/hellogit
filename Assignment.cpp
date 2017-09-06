//  
//  Assignment.cpp
//  Assignment
//
//  Created by Jelani on 05/09/2017.
//  Copyright © 2017 Tap. TOUCH. All rights reserved.
//

#include "Assignment.hpp"
#include <iostream>

using namespace std;


Assignment::Assignment(int num, int num2){
    number1 = num;
    number2 = num2;
}

int Assignment::getNum() {
    return number1;
}
void Assignment::setNum(int num) {
    number1 = num;
}

int Assignment::getNum2() {
    return number2;
}

void Assignment::setNum2(int num2){
    number2 = num2;
}
