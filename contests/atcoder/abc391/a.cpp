#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'N'){
            s[i] = 'S';
        }
        else if(s[i] == 'S'){
            s[i] = 'N';
        }
        else if(s[i] == 'E'){
            s[i] = 'W';
        }
        else{
            s[i] = 'E';
        }
    }
    cout << s << "\n";
}