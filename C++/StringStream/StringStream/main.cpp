//
//  main.cpp
//  StringStream
//
//  Created by Felipe Pinna on 24/07/17.
//  Copyright © 2017 Felipe Pinna. All rights reserved.
//

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    stringstream ss(str);
    vector<int> numbers = *new vector<int>();
    char temp;
    while (!ss.eof()) {
        int a;
        ss >> a;
        ss >> temp;
        numbers.push_back(a);
    }
    return numbers;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}


