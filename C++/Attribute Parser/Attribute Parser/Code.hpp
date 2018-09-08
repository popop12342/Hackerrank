//
//  Code.hpp
//  Attribute Parser
//
//  Created by Felipe Pinna on 25/07/17.
//  Copyright © 2017 Felipe Pinna. All rights reserved.
//

#ifndef Code_hpp
#define Code_hpp

#include <iostream>
#include <string>
#include <vector>
#include "Element.hpp"

using namespace std;

class Code {
    
public:
    
    Code(string lines[], int numLines);
    
    string getQuarry(string id);


private:
    
    vector<Element*> elements;
    int numElements;
};

#endif /* Code_hpp */
