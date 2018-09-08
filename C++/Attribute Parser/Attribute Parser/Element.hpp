//
//  Element.hpp
//  Attribute Parser
//
//  Created by Felipe Pinna on 26/07/17.
//  Copyright © 2017 Felipe Pinna. All rights reserved.
//

#ifndef Element_hpp
#define Element_hpp

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Element {
    
public:
    
    Element();
    
    virtual string getQuarry(string id) = 0;
    
};

#endif /* Element_hpp */
