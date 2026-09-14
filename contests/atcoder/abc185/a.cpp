#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> x;
    for(int i = 0; i < 4; i++)
    {
        int y;
        cin >> y;
        x.push_back(y);
    }
    sort(begin(x),end(x));
    cout << x[0] << "\n";
}