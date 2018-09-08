//
//  Value.hpp
//  Attribute Parser
//
//  Created by Felipe Pinna on 26/07/17.
//  Copyright © 2017 Felipe Pinna. All rights reserved.
//

#ifndef Value_hpp
#define Value_hpp

#include "Element.hpp"

class Value : public Element {
public:
    
    Value(string valueName, string value);
    ~Value();
    
    string getQuarry(string id);
    
private:
    
    string valueName;
    string value;
    
    
};

#endif /* Value_hpp */
