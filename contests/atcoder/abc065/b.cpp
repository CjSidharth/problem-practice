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
    long long n;
    cin >> n;
    vector<long long> num(n);
    for(long long i = 0; i < n; i++){
        cin >> num[i];
    }
    long long j = 0;
    long long x = 0;
    for(long long i = 0; i < n; i++){
        if(num[j] == 2){
            cout << x + 1 << "\n";
            return;
        }
        else{
            j = num[j];
            j--;
        }
        x++;
    }
    cout << -1 << "\n";

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
