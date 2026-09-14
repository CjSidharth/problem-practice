#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<char>> a,b;
    for(int i = 0; i < n; i++)
    {
        vector<char> temp;
        for(int j = 0; j < n; j++)
        {
            char x;
            cin >> x;
            temp.push_back(x);
        }
        a.push_back(temp);
    }
    for(int i = 0; i < n; i++)
    {
        vector<char> temp;
        for(int j = 0; j < n; j++)
        {
            char x;
            cin >> x;
            temp.push_back(x);
        }
        b.push_back(temp);
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[i][j] != b[i][j])
            {
                cout << i+1 << " " << j+1 << "\n";
                return 0;
            }
        }
    }
    return 0;
}