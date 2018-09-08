//
//  Student.cpp
//  Virtual Functions
//
//  Created by Felipe Pinna on 24/07/17.
//  Copyright © 2017 Felipe Pinna. All rights reserved.
//

#include "Student.hpp"

using namespace std;

int Student::numStudents = 0;

Student::Student() {
    this->cur_id = ++this->numStudents;
}

void Student::getdata() {
    cin >> this->name >> this->age;
    
    for (int i = 0; i < 6; i++) {
        cin >> this->marks[i];
    }
}

void Student::putdata() {
    cout << this->name << " " << this->age << " ";
    
    int sum = 0;
    for (int i = 0; i < 6; i++) {
        sum += this->marks[i];
    }
    
    cout << sum << " " << this->cur_id << endl;
}
