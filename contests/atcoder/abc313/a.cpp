#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> num;
    for(int i= 0; i < n; i++)
    {
        int x;
        cin >> x;
        num.push_back(x);
    }
    int p1 = num[0];
    sort(begin(num),end(num));
    if(p1 == num[n-1] && num[n-1] != num[n-2])
    {
        cout << 0 << "\n";
    }
    else
    {
        cout << num[n-1]-p1+1 << "\n";
    }
}