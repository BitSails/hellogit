//
//  Client
//  main.cpp
//  Assignment
//
//  Created by Jelani on 05/09/2017.
//  Copyright © 2017 Tap. TOUCH. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Assignment.hpp"

using namespace std;

int main() {
    // insert code here...
    Assignment a = {23,22};
    
    vector<Assignment> indexPath = {{33,12}, {25,12}, {18,7}};
    indexPath.push_back({21,8});
    
    for (int number = 0; number < indexPath.size(); number++) {
        cout << indexPath[number].getNum() << ", " << indexPath[number].getNum2() << endl;
    }
    return 0;
}
