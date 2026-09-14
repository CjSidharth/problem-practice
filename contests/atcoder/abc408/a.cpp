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
    int n,s;
    cin >> n >> s;
    vector<int> num(n);
    for(int i = 0; i < n; i++){
        cin >> num[i];
    }
    float last = 0;
    for(int i = 0; i < n; i++){
        if(s + 0.5 + last > num[i]){
            last = num[i];
            continue;
        }
        else{
            cout << "No" << "\n";
            return;
        }
    }
    cout << "Yes" << "\n";
    
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
