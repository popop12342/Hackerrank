//
//  main.cpp
//  Basic Data Types
//
//  Created by Felipe Pinna on 15/07/17.
//  Copyright © 2017 Felipe Pinna. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    vector<vector<int>> *a = new vector<vector<int>>();
    int n, q;
    cin >> n >> q;
    
    for (int i = 0; i < n; i++) {
        vector<int> *v = new vector<int>;
        a->push_back(*v);
        int k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            int x;
            cin >> x;
            a->at(i).push_back(x);
        }
    }
    
    for (int i = 0; i < q; i++) {
        int l, c;
        cin >> l;
        cin >> c;
        cout << endl << a->at(l).at(c);
    }
    
    return 0;
}
