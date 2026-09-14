#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> x(k,1);
    for(int i = 0; i < (n-k); i++)
    {
        x.push_back(0);
    }
    long long ans = 0;
    vector<vector<int>>num(m);
    vector<char> result;
    for(int i = 0; i < m; i++)
    {
        int s;
        cin >> s;
        vector<int> tmp;
        for(int i = 0 ; i < x; i++)
        {
            int y;
            cin >> y;
            tmp.push_back(y);            
        }
        num.push_back(tmp);
        char c;
        cin >> c;
        result.push_back(c);
    }
    
}