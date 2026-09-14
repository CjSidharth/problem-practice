#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long> num;
    for(int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        num.push_back(x);
    }
    bool even = true;
    long long ans = 0;
    while(even)
    {
        for(int i = 0; i < n; i++)
        {
            if(num[i]%2 != 0)
            {
                even = false;
            }
            else
            {
                num[i] /= 2;
            }
        }
        if(even)
        {
            ans++;
        }
        
    }

    cout << ans << "\n";
}