//
//  main.cpp
//  Virtual Functions
//
//  Created by Felipe Pinna on 23/07/17.
//  Copyright © 2017 Felipe Pinna. All rights reserved.
//

#include <iostream>

#include "Student.hpp"
#include "Professor.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];
    
    for(int i = 0;i < n;i++){
        
        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;
            
        }
        else per[i] = new Student; // Else the current object is of type Student
        
        per[i]->getdata(); // Get the data from the user.
        
    }
    
    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.
    
    return 0;
}
