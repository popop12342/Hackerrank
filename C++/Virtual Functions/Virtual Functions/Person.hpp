//
//  Person.hpp
//  Virtual Functions
//
//  Created by Felipe Pinna on 23/07/17.
//  Copyright © 2017 Felipe Pinna. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Person {
    
protected:
    
    string name;
    int age;
    
    
public:
    
    Person();
    
    virtual void getdata() = 0;
    virtual void putdata() = 0;
    
    
};
#endif /* Person_hpp */
