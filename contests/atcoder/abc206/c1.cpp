#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    map<long long,long long> mp;
    for(long long i = 0; i < n; i++){
        int x;
        cin >> x;
        mp[x]++;
    }
    long long ans = 0;
    for(auto x : mp){
        ans += x.second*(n-x.second);
    }
    ans /= 2;
    cout << ans << "\n";
}