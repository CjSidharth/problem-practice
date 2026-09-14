#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<vector<long long>> stat;
    vector<vector<long long>> prof;
    for(int i = 0; i < n; i++)
    {
        vector num;
        for(int j = 0; j < 10; j++)
        {
            long long x;
            cin >> x;
            num.push_back(x);
        }
        stat.push_back(num);
    }
    for(int i = 0; i < n; i++)
    {
        vector num;
        for(int j = 0; j < 11; j++)
        {
            long long x;
            cin >> x;
            num.push_back(x);
        }
        prof.push_back(num);
    }
}