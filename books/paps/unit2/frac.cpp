#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << 5 / 3 << "\n"; // treated as integer
    cout << (float)(5 / 3) << "\n"; // first gets evaluated as integer
    cout << (float) 5 / 3 << "\n";

}
