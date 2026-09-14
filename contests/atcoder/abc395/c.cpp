#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<int,int> mp;
    int m = INT_MAX;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(mp.find(x) != mp.end()){
            int l = i - mp[x] + 1;
            m = min(l,m);
        }
        mp[x] = i;
    }
    if(m == INT_MAX){
        cout << -1 << "\n";
    }
    else{
        cout << m << "\n";
    }
    return 0;
}