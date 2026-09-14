#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,s,k,ans = 0;
    
    cin >> n >> s >> k;
    for(long long i = 0; i < n; i++){
        int p,q;
        cin >> p >> q;
        ans += p*q;
    }
    if(ans < s){
        ans += k;
    }
    cout << ans << "\n";
    return 0;
}