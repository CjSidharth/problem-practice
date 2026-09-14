#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> num;
    int x;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        num.push_back(x);
    }
    for(int i = 0; i < n-1; i++)
    {
        cout << num[i]*num[i+1] << "\n";
    }

}