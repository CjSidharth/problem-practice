#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y;
    cin >> x >> y;
    if (x > 0 && y > 0)
    {
        cout << "1\n";
    }
    else if (y > 0 && x < 0)
    {
        cout << "2\n";
    }
    else if (y < 0 && x < 0)
    {
        cout << "3\n";
    }
    else
    {
        cout << "4\n";
    }
}
