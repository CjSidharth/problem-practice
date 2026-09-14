#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define int long long
#define REP(i,a,b) for(int i = a; i < b; i++)
#define all(v) v.begin(),v.end()
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vi haiku(3);
    REP(i,0,3)
    {
        cin >> haiku[i];
    }
    sort(haiku.begin(),haiku.end());
    if(haiku[0] == 5 && haiku[1] == 5 && haiku[2] == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
