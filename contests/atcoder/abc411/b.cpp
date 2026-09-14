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
    int n;
    cin >> n;
    vector<int> num(n-1);
    for(int i = 0; i < n-1; i++){
        cin >> num[i];
    }
    for(int i = 1; i < n-1; i++){

    }
    for(int i = 0; i < n-1; i++){
        int sum = num[i];
        cout << sum << " "; 
        for(int j = i+1; j < n-1; j++){
            sum += num[j];
            cout << sum << " ";
        }
        cout << "\n";
    }
    return;
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
