#include<bits/stdc++.h> // Include this header to access all standard C++ libraries
using namespace std;

int main() {
    unordered_set<string> StringSet;

    StringSet.insert("code");
    StringSet.insert("in");
    StringSet.insert("C++");
    StringSet.insert("is");
    StringSet.insert("fast");

    string key = "slow";

    if (StringSet.find(key) == StringSet.end()) {
        cout << key << " not found" << endl;
    } else {
        cout << "Found" << endl;
    }

    key = "C++";

    if (StringSet.find(key) == StringSet.end()) {
        cout << key << " not found" << endl;
    } else {
        cout << "Found " << key << endl;
    }
    
    cout<<"\n";

    cout << "All elements of set are:" << endl;

    unordered_set<string>::iterator itr;
    for (itr = StringSet.begin(); itr != StringSet.end(); itr++)
        cout << (*itr) << endl;

    return 0;
}
