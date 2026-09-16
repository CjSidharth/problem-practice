#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    if (a <= b)
    {
        cout << a << " " << b << "\n";
    }
    else
    {
        cout << b << " " << a << "\n";
    }
}
