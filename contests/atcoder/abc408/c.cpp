#include <bits/stdc++.h>
#define cy      cout<<"YES\n"
#define cn      cout<<"NO\n"
#define ll      long long
#define mod     1000000007
using namespace std;

// using i64 = long long;
// using u64 = unsigned long long;
// using i128 = __int128;
// using u128 = unsigned __int128;

// const int MOD = 1e9 + 7;
// const int INF_INT = 2e9;
// const i64 INF_LL = 9e18;

void solve() {
    long long n,m;
    cin >> n >> m;
    vector<long long> num(n+1,0);
    for(long long i = 0; i < m; i++){
        long long l,r;
        cin >> l >> r;
        num[l-1]++;
        num[r]--;
    }
    long long ans = INT_MAX;
    for(long long i = 0; i < n; i++){
        if(i > 0) num[i] += num[i-1];
        ans = min(ans,num[i]);
    }
    cout << ans << "\n";
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
