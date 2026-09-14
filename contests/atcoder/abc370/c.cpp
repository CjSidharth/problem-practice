#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin >> s >> t;
    int n = s.size();
    vector<string> x;
    while(s != t){
        string ns(n,'z');
        for(int i = 0; i < n; i++){
            if(s[i] != t[i]){
                ns = min(ns,s.substr(0,i)+t[i]+s.substr(i+1,n));
            }
        }
        x.push_back(ns);
        s = ns;        
    }
    cout << x.size() << "\n";
    for(auto y : x){
        cout << y << "\n"; 
    }
    return 0;
}