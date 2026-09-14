#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    vector<int> req;
    for(int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        req.push_back(x);
    }
    vector<int> sum(m,0);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            sum[j] += x;
        }
    }
    for(int i = 0; i < m; i++)
    {
        if(sum[i] < req[i])
        {
            cout << "No" << "\n";
            return 0;
        }
    }
    cout << "Yes" << "\n";
    return 0;

}