#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    vector<long long> num;
    cin >> n;
    for(long long i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        num.push_back(x);
    }
    vector <long long> y = num;
    sort(begin(num),end(num));
    for(long long i = 0; i < n; i++)
    {
        if(y[i] != num[n-1])
        {
            cout << num[n-1] << "\n";
        }
        else
        {
            cout << num[n-2] << "\n";
        }
    }
}