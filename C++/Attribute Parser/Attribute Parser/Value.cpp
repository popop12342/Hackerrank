//
//  Value.cpp
//  Attribute Parser
//
//  Created by Felipe Pinna on 26/07/17.
//  Copyright © 2017 Felipe Pinna. All rights reserved.
//

#include "Value.hpp"


Value::Value (string valueName, string value) {
    this->valueName = valueName;
    this->value = value;
}

Value::~Value() {

}

string Value::getQuarry (string id) {
    if (id == this->valueName) {
        return this->value;
    } else {
        return "Not Found!";
    }
}
