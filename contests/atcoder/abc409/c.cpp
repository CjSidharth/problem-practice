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
    long long n,l;
    cin >> n >> l;
    vector<long long> cnt(l,0);
    vector<long long> d(n);
    for(long long i = 0; i < n-1; i++){
        cin >> d[i];
    }
    if(l % 3 != 0){
        cout << 0 << "\n";
        return;
    }
    long long x = 0;
    for(long long i = 0; i < n; i++){

        if (i != 0) x += d[i-1];
        x %= l;
        cnt[x]++;
    }
    long long ans = 0;
    for(long long i = 0; i < l/3; i++){
        ans += cnt[i] * cnt[i + (l / 3)] * cnt[i + ((2*l)/3)];
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
