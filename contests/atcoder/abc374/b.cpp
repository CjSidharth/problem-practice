#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin >> s >> t;
    if(s == t){
        cout << 0 << "\n";
    }
    else{
        int i = 0;
        while(s[i] == t[i]){
            i++;
        }
        cout << i+1 << "\n";
    }
    return 0;
}