//
//  Tag.cpp
//  Attribute Parser
//
//  Created by Felipe Pinna on 26/07/17.
//  Copyright © 2017 Felipe Pinna. All rights reserved.
//

#include "Tag.hpp"

Tag::Tag (string lines[], int numLines, int currentLine) {
    
    for (int i = currentLine; i < numLines; i++) {
        string line = lines[i];
        int pos = 0;
        this->name = getName(line, &pos);
        this->elements.push_back();
    }
}

Tag::~Tag() {
    
}

string Tag::getName() {
    return this->name;
}

string Tag::getQuarry(string id) {
    return nullptr;
}

string Tag::getName(string line, int *pos) {
    string name = "";
    char c = line[0];
    for (int i = 1; c != ' '; i++) {
        c = line[i];
        name[i-1] = c;
        pos++;
    }
    return name;
}
