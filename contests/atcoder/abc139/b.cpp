#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    int ans = 0;
    int out = 1;
    while(out < b)
    {
        --out;
        out += a;
        ++ans;
    }
    cout << ans << "\n";

}