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
    int n,m;
    cin >> n >> m;
    vector<vector<int>> s(n+1),t(m+1);
    for(int i = 1; i <= n; i++){
        vector<int> num(n+1);
        for(int i = 1; i <= n; i++){
            cin >> num[i];
        }
        s.push_back(num);
    }
    for(int i = 1; i <= n; i++){
        vector<int> num(n+1);
        for(int i = 1; i <= n; i++){
            cin >> num[i];
        }
        s.push_back(num);
    }
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
