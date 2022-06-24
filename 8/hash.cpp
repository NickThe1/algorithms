//
// Created by 1 on 24.06.2022.
//

#include <iostream>
#include <unordered_map>
#include "hash.h"

using namespace std;

void present_hash(){
    unordered_map<string, int> umap;
    string key = "PI";
    // inserting values by using [] operator
    umap["GeeksforGeeks"] = 10;
    umap["Practice"] = 20;
    umap["Contribute"] = 30;

    umap.insert(make_pair("e", 2.718));

    key = "lambda";
    if (umap.find(key) == umap.end())
        cout << key << " not found\n";
    else
        cout << "Found " << key << endl;

    // Traversing an unordered map
    for (auto x : umap)
        cout << x.first << " " << x.second << endl;
}
