#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> s;
    int x = 0, y = 0, z = 0, w = 0;
    for(int i = 0; i < 4; i++)
    {
        string a;
        cin >> a;
        if(a == "H")
        {
            x++;
        }
        if(a == "2B")
        {
            y++;
        }
        if(a == "3B")
        {
            z++;
        }
        if(a == "HR")
        {
            w++;
        }
    }

    if (x == 1 && y == 1 && z == 1 && w == 1)
    {
        cout << "Yes" << "\n";
    }
    else
    {
        cout << "No" << "\n";
    }
}