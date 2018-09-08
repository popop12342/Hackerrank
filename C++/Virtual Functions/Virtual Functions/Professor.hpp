//
//  Professor.hpp
//  Virtual Functions
//
//  Created by Felipe Pinna on 24/07/17.
//  Copyright © 2017 Felipe Pinna. All rights reserved.
//

#ifndef Professor_hpp
#define Professor_hpp

#include <stdio.h>
#include <iostream>
#include "Person.hpp"

class Professor : public Person {
    
private:
    
    int publications;
    int cur_id;
    static int numProfessor;
    
    
public:
    
    Professor();
    
    void getdata();
    void putdata();
    
};
#endif /* Professor_hpp */
