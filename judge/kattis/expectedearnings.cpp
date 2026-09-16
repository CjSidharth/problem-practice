#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    double p;
    cin >> n >> k >> p;
    double e = (n - k) * p - k * (1 - p);
    if (e < -1e-9)
    {
        cout << "spela" << "\n";
    }
    else
    {
        cout << "spela inte!" << "\n";
    }
}
