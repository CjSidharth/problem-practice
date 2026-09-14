#include <bits/stdc++.h>
#include <ext/rope>
#define cy      cout<<"YES\n"
#define cn      cout<<"NO\n"
#define ll      long long
#define mod     1000000007
using namespace std;
using namespace __gnu_cxx;
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
    crope server = "";
    unordered_map<int,crope> s;
    for(long long i = 0; i < q; i++){
        int t;
        cin >> t;
        long long p;
        cin >> p;
        if(t == 1){
            s[p] = server;
        }
        else if(t == 2){
            string x;
            cin >> x;
            s[p] += x.c_str();
        }
        else{
            server = s[p];
        }
    }
    cout << server << "\n";
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
