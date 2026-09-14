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
    int x,y;
    cin >> x >> y;
    double a = 0,b = 0,c = 0;
    for(int i = 1; i <= 6; i++){
        for(int j = 1; j <= 6; j++){
            if(i+j >= x){
                a++;
            }
            if(abs(i-j) >= y){
                b++;
            }
            if(i+j >= x && abs(i-j) >= y){
                c++;
            }
        }
    }
    cout << setprecision(11) << (a + b - c)/36 << "\n";
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
