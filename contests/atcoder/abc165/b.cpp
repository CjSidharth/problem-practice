#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long test = 100,ans = 0;
    while(test < n)
    {
        long long interest = floor(0.01*test);
        test += interest;
        ans++;
    }
    cout << ans << "\n";
}