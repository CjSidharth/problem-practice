#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int x = a + c + e, y = b + d + f;
    if (a == c)
    {
        x -= 2 * a;
    }
    else if (c == e)
    {
        x -= 2 * c;
    }
    else
    {
        x -= 2 * e;
    }
    if (b == d)
    {
        y -= 2 * b;
    }
    else if (d == f)
    {
        y -= 2 * d;
    }
    else
    {
        y -= 2 * f;
    }

    cout << x << " " << y << "\n";
}
