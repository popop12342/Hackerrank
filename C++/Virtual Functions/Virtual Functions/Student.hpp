//
//  Student.hpp
//  Virtual Functions
//
//  Created by Felipe Pinna on 24/07/17.
//  Copyright © 2017 Felipe Pinna. All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp

#include <stdio.h>
#include <iostream>
#include "Person.hpp"

class Student : public Person{
    
private:
    
    int marks[6];
    int cur_id;
    static int numStudents;
    
    
public:
    
    Student();
    
    void getdata();
    void putdata();
    
};
#endif /* Student_hpp */
