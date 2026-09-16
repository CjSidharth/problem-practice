#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y;
    cin >> x >> y;
    int a = 0, b = 0;
    if (y >= 45)
    {
        b = y - 45;
        a = x;
    }
    else
    {
        b = 60 - (45 - y);
        a = (x == 0) ? 23 : (--x);
    }
    cout << a << " " << b << "\n";
}
