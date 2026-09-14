#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long ans = 1;
    for(long long i = 2; i <= n; i++)
    {
        ans = ans%(1000000007);
        ans *= i%(1000000007);
    }
    cout << ans%(1000000007) << "\n";
}