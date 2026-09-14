#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    int ans = 0;
    cin >> n >> m;
    vector<int> p;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        p.push_back(x);
    }
    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        ans += p[x-1];
    }
    cout << ans << "\n";
    return 0;
}