#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int> num;
    cin >> n;
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
        num.push_back(x);
    }
    int avg = round(sum/(float)n);
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        ans += (num[i]-avg)*(num[i]-avg);
    }
    cout << ans << "\n";
}