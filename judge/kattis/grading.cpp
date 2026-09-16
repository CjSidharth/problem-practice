#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d, e;
    int g;
    cin >> a >> b >> c >> d >> e >> g;

    if (g >= a)
    {
        cout << "A\n";
    }
    else if (g >= b)
    {
        cout << "B\n";
    }
    else if (g >= c)
    {
        cout << "C\n";
    }
    else if (g >= d)
    {
        cout << "D\n";
    }
    else if (g >= e)
    {
        cout << "E\n";
    }
    else
    {
        cout << "F\n";
    }

    return 0;
}