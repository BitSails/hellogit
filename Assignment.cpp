//  
//  Assignment.cpp
//  Assignment
//
//  Created by Jelani on 05/09/2017.
//  Copyright © 2017 Tap. TOUCH. All rights reserved.
//

#include "Assignment.h"
#include <iostream>

using namespace std;


Assignment::Assignment(int num, bool isFalse){
    number1 = num;
    ;
}

int Assignment::getNum() {
    return number1;
}
void Assignment::setNum(int num) {
    number1 = num;
}

bool Assignment::getBool() {
    return whatIs;
}

void Assignment::setBool(bool isFalse){
    whatIs = isFalse;
}
