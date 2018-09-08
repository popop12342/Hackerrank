//
//  Tag.hpp
//  Attribute Parser
//
//  Created by Felipe Pinna on 26/07/17.
//  Copyright © 2017 Felipe Pinna. All rights reserved.
//

#ifndef Tag_hpp
#define Tag_hpp

#include "Element.hpp"

class Tag : public Element {
    
public:
    
    Tag (string lines[], int numLines, int currentLine);
    ~Tag();
    
    string getName();
    
   string getQuarry(string id);
    
    
private:
    
    string getName(string line, int *pos);
    
    vector<Element*> elements;
    int numElements;
    string name;
};

#endif /* Tag_hpp */
