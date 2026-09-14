#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,r;
    cin >> n >> l >> r;
    vector<int> num;
    for(int i = 0; i < n; i++)
    {
        num.push_back(i+1);
    }
    int x = r;
    for(int i = l-1; i <= r-1; i++)
    {
        num[i] = x;
        x--;
    }
    for(auto y: num)
    {
        cout << y << " ";
    }
    return 0;
}