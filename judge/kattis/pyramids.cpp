#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    long long sum = 0, height = 0, i = 1;
    while (sum < n)
    {
        sum += i * i;
        i += 2;
        height++;
    }
    if (sum != n)
    {
        height--;
    }
    cout << height << "\n";
}
