//
//  main.cpp
//  Attribute Parser
//
//  Created by Felipe Pinna on 25/07/17.
//  Copyright © 2017 Felipe Pinna. All rights reserved.
//

#include <iostream>
#include <string>
#include "Value.hpp"
#include "Tag.hpp"

using namespace std;


int main(int argc, const char * argv[]) {

    string line;
    cin >> line;
    string lines[1] = {line};
    Tag *t = new Tag(lines, 1, 0);
    cout << t->getName() << endl;
    
//    int n, q;
//    cin >> n >> q;
//
//    // read the input lines
//    string lines[20];
//    for (int i = 0; i < n; i++) {
//        getline(cin, lines[i]);
//    }
//
//
//    Code *code = new Code(lines, n);
//
//    // print the quarryes
//    for (int i = 0; i < q; i++) {
//        cout << code->getQuarry(i) << endl;
//    }
    
    return 0;
}
