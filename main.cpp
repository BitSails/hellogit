//
//  Client
//  main.cpp
//  Assignment
//
//  Created by Jelani on 05/09/2017.
//  Copyright © 2017 Tap. TOUCH. All rights reserved.
//


#include <vector>
#include <iostream>
#include "Assignment.h"

using namespace std;

int linearSearch(auto data, auto key);//prototype

int linearSearch(auto data, auto key) {
for(auto i = 0u; i < data.size(); i++)
   {
     if (data[i].getNum() == key)//key found
     cout << data[i].getNum() << " found";
      return i;
  }
  
   return -1;//not found
}

int main() {
    // insert code here...
    Assignment a = {23,true};
    
    vector<Assignment> indexPath = {{33,true}, {25,true}, {18, false}};
    indexPath.push_back({21,true});
    
    for (int number = 0; number < indexPath.size(); number++) {
        cout << endl << indexPath[number].getNum() << ", " << indexPath[number].getBool() << endl;
linearSearch(indexPath, 33);
    }
    return 0;
}
