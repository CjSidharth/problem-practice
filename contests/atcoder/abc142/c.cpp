#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    map<long long,long long> mp;
    vector<pair<long long,long long>> vec;
    for(long long i = 1; i <= n; i++)
    {
        pair<long long,long long> x;
        x.second = i;
        cin >> x.first;
        vec.push_back(x);
    }
    mp.insert(vec.begin(),vec.end());
    for(auto g: mp)
    {
        cout << g.second << "\n";
    }
}