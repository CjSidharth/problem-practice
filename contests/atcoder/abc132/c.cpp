#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector<long long> num;
    for(int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        num.push_back(x);
    }
    sort(num.begin(),num.end());
    cout << num[n/2]-num[n/2-1] << "\n";
}