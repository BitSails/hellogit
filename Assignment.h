//
//  Assignment.hpp
//  Assignment
//
//  Created by Jelani on 05/09/2017.
//  Copyright © 2017 Tap. TOUCH. All rights reserved.
//

#ifndef Assignment_h
#define Assignment_h

#include <iostream>



class Assignment {
    
private:
    int number1;
   bool whatIs;
    
public:
    Assignment(int num, bool isFalse);
    int getNum();
    void setNum(int num);
    bool getBool();
    void setBool(bool isFalse);
    
    
    
    
};
#endif /* Assignment_hpp */
