#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        if (x <= n)
        {
            n -= x;
        }
        else
        {
            ans = (m - i);
            break;
        }
    }
    cout << ans << "\n";
}
