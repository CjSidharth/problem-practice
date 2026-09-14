#include <bits/stdc++.h>
using namespace std;
long long fact(long long x)
{
    if(x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        return x*fact(x-1);
    }
}
int main()
{
    long long n,a,b;
    cin >> n >> a >> b;
    long long ans = 0;
    for(long long i = 1; i <= n; i++)
    {
        if(i == a || i == b)
        {
            continue;
        }
        else
        {

        }
    }
}