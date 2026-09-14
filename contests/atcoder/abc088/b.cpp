#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> num;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        num.push_back(x);
    }
    sort(begin(num),end(num));
    int a = 0, b = 0;
    for(int i = 0; i < n; i++)
    {
        if(i%2 == 0)
        {
            a += num[i];
        }
        else
        {
            b += num[i];
        }
    }
    cout << abs(a - b) << "\n";
}