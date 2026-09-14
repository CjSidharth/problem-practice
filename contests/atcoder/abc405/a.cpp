#include <bits/stdc++.h>

using namespace std;

// using i64 = long long;
// using u64 = unsigned long long;
// using i128 = __int128;
// using u128 = unsigned __int128;

// const int MOD = 1e9 + 7;
// const int INF_INT = 2e9;
// const i64 INF_LL = 9e18;

void solve() {
    int r,x;
    cin >> r >> x;
    if(x == 1){
        if(1600 <= r && r <= 2999){
            cout << "Yes" << "\n";
        }
        else{
            cout << "No" << "\n";
        }
    }
    else{
        if(1200 <= r && r <= 2399){
            cout << "Yes" << "\n";
        }
        else{
            cout << "No" << "\n";
        }
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
