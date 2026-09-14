#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    vector<vector<int>> power_set;
    for(int b = 0; b < (1 << n); b++){
        vector<int> subset;
        for(int i = 0; i < n; i++){
            if(b&(1<<i)) subset.push_back(i);
        }
        power_set.push_back(subset);
    }
    for(auto x : power_set){
       for(auto y : x){
        cout << x << " ";
       }
       cout << "\n";
    }
}