//
//  Professor.cpp
//  Virtual Functions
//
//  Created by Felipe Pinna on 24/07/17.
//  Copyright © 2017 Felipe Pinna. All rights reserved.
//

#include "Professor.hpp"

using namespace std;

int Professor::numProfessor = 0;

Professor::Professor() {
    this->cur_id = ++this->numProfessor;
    
}


void Professor::getdata() {
    cin >> this->name >> this->age >> this->publications;
}

void Professor::putdata() {
    cout << this->name << " " << this->age << " " << this->publications << " " << this->cur_id << endl;
}
