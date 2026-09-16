#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a = INT_MAX;
    int b = INT_MIN;
    a++;
    cout << a << "\n";
    b--;
    cout << b << "\n";
    cout << numeric_limits<double>::max() << "\n";
    cout << numeric_limits<double>::min() << "\n";
}
