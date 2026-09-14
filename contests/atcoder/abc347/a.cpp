#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    int x;
    vector<int> mult;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        if(x%k == 0)
        {
            mult.push_back(x/k);
        }
    }
    sort(begin(mult),end(mult));
    for(auto s: mult)
    {
        cout << s << "\n";
    }

}