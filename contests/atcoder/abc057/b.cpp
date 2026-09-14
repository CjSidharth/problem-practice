#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    vector<long long> a,b;
    vector<long long> c,d;
    for(int i = 0;  i < n; i++)
    {
        long long x,y;
        cin >> x >> y;
        a.push_back(x);
        b.push_back(y);
    }
    for(int i = 0; i < m; i++)
    {
        long long x,y;
        cin >> x >> y;
        c.push_back(x);
        d.push_back(y);
    }
    vector<int> ans;
    for(int i = 0; i < n; i++)
    {
        vector<pair<long long,int>> ss;
        for(int j = 0; j < m; j++)
        {
            long long dist;
            dist = abs(a[i]-c[j])+abs(b[i]-d[i]);
            ss.push_back()
        }

    }
}