#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n >> s;
    int x = 0;
    int m = -1;
    m = max(x,m);
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'D')
        {
            x--;
            m = max(x,m);
        }
        else
        {
            x++;
            m = max(x,m);
        }
        
    }

    cout << m << "\n";
}