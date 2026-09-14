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
    long long n,q;
    cin >> n >> q;
    vector<long long> num(n);
    iota(num.begin(),num.end(),1);
    long long offset = 0;
    for(long long i = 0; i < q; i++){
        int c;
        cin >> c;
        if(c == 1){
            long long p,x;
            cin >> p >> x;
            num[(p+offset-1)%n] = x;
        }
        else if(c == 2){
            long long p;
            cin >> p;
            cout << num[(p+offset-1)%n] << "\n";
        }
        else{
            long long k;
            cin >> k;
            offset += k;
        }
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
