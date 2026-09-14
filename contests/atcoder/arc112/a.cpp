#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    vector<pair<int,int>> num;
    for(int i = 0; i < t; i++){
        int l,r;
        cin >> l >> r;
        num.push_back(make_pair(l,r));       
    }
    
    return 0;
}