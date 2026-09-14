#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<string> s;
    for(int i = 0; i < 8; i++){
        string x;
        cin >> x;
        s.push_back(x);
    }
    int n = 64;
    set<int> x,y;
    for(int i = 0; i < 8; i++){
        for(int j =  0; j < 8; j++){
            if(s[i][j] == '#'){
                x.insert(i);
                y.insert(j);
            }
        }
    }
    cout << (8-x.size())*(8-y.size()) << "\n";
    return 0;
}