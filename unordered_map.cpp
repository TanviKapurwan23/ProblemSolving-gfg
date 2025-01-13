#include<bits/stdc++.h>

using namespace std;

int main(){

    unordered_map<string, int> umap;

    umap["gfg"] = 10;
    umap["practice"] = 20;
    umap["complete"] = 30;

    for(auto x : umap){
        cout << x.first << " : " << x.second << endl;
    }

    return 0;
}