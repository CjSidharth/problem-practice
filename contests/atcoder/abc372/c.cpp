#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int> fin;
    for(int i = 0; i < q; i++){
        int x;
        char c;
        cin >> x >> c;
        s[x-1] = c;
        int j = 0;
        int ans = 0;
        while(s.find("ABC",j) != s.npos){
            j += 3;
            ans += 1;
        }
        fin.push_back(ans);
    }
    for(auto x: fin){
        cout <<  x << "\n";
    }
}