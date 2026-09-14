#include <bits/stdc++.h>
using namespace std;
int main(){
    int l,r;
    cin >> l >> r;
    string s = "atcoder";
    cout << s.substr(l-1,r-l+1) << "\n";
    return 0;
}