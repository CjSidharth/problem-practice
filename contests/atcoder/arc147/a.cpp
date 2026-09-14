#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector<long long> num;
    for(long long i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        num.push_back(x);
    }
    sort(begin(num),end(num));
    long long ans = 0;
    while(num.size() != 1)
    {
        num[num.size()-1] = num[num.size()-1]%num[0];
        if(num[num.size()-1] == 0)
        {
            num.pop_back();
        }
        ans++;
        sort(begin(num),end(num));
    }
    cout << ans << "\n";
}