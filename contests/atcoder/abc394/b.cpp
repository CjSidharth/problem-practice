#include <bits/stdc++.h>
using namespace std;

bool compLength(string x, string y){
    return x.size() < y.size();
}

int main(){
    int n;
    cin >> n;
    vector<string> ss;
    for(int i = 0 ; i < n; i++){
        string s;
        cin >> s;
        ss.push_back(s);
    }
    sort(ss.begin(),ss.end(),compLength);
    string ans = "";
    for(string x : ss){
        ans += x;
    }
    cout << ans << "\n";
    return 0;
}