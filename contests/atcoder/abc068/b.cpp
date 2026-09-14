#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 0; pow(2,i) <= n; i++)
    {
        ans++;
    }
    cout << pow(2,ans-1) << "\n";
}