#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n = s.size();
    string x = "";
    for(int i = 0; i < n; i++){
        if(s[i] == '2'){
            x += '2';
        }
    }
    cout << x << "\n";
    return 0;
}