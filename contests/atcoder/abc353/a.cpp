#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> num;
    int x;
    cin >> x;
    for(int i = 1; i < n; i++)
    {
        int cmp;
        cin >> cmp;
        if(cmp > x)
        {
            cout << i+1 << "\n";
            return 0;
        }
    }
    cout << -1 << "\n";
    return 0;
}