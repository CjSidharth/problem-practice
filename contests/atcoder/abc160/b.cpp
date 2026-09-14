#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x;
    cin >> x;
    long long coin1 = floor(x/500);
    long long coin2 = floor((x-(coin1*500))/5);
    cout << 1000*coin1 + 5*(coin2) << "\n";
}