#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<pair<int,int>> num;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        pair<int,int> x;
        cin >> x.first >> x.second;
        num.push_back(x);
    }
    int count = 0;
    bool row = false;
    for(int i = 0; i < n; i++)
    {
        if(num[i].first == num[i].second)
        {
            count++;
            row = true;
        }
        else
        {
            count = 0;
            row = false;
        }
        if(count == 3 && row == true)
        {
            cout << "Yes" << "\n";
            return 0;
        }
    }
    cout << "No" << "\n";
    return 0;
}