#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c;
    cin >> n >> m >> c;
    vector<vector<int>> num;
    vector<int> b;
    for(int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }
    for(int i = 0; i < n; i++)
    {
        vector<int> y;
        for(int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            y.push_back(x);
        }
        num.push_back(y);
    }
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        int sum = 0;
        for(int j = 0; j < m; j++)
        {
            sum += (num[i][j] * b[j]);
        }
        sum += c;
        if(sum > 0)
        {
            ans++;
        }
    }

    cout << ans << "\n";
}