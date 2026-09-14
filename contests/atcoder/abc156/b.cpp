#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin >> n >> k;
    int ans = floor(log(n)/log(k) + 1);
    cout << ans << "\n";
}