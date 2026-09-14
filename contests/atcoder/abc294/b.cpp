#include <bits/stdc++.h>
using namespace std;

char letter(int n)
{
    assert(n >= 1 && n <= 26);
    return "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[n-1];
}

int main()
{
    int h,w;
    cin >> h >> w;
    vector<vector<int>> num;
    for(int i = 0; i < h; i++)
    {
        vector<int> v;
        for(int j = 0; j < w; j++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        num.push_back(v);
    }

    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < w; j++)
        {
            if(num[i][j] == 0)
            {
                cout << ".";
            }
            else
            {
                cout << letter(num[i][j]);
            }
        }
        cout << "\n";
    }

    
}


