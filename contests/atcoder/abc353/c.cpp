#include <bits/stdc++.h>
using namespace std;
long long f(long long x,long long y)
{
    return (x+y)%100000000;
}
int main()
{
    long long n;
    cin >> n;
    vector<long long> num;
    long long sum = 0;
    for(long long i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        num.push_back(x);
    }
    n += 2;
    for(long long i = 1; i < n; i++)
    {
        for(long long j = i+1; j < n-1; j++)
        {
            long long ans = f(num[i-1],num[j-1]);
            sum += ans;
        }
    }
    cout << sum << "\n";
}