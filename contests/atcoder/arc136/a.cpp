#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string x = "";
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'C')
        {
            x += s[i];
        }
        else if(s[i] == 'A')
        {
            x += "BB";
        }
        else
        {
            x += "B";
        }
    }
    string ans = "";
    for(int i = 0; i < x.size(); i++)
    {
        if(x[i] == 'C')
        {
            ans += x[i];
        }
        else if(x[i] == 'B' && x[i+1] == 'B')
        {
            ans += "A";
            i++;
        }
        else
        {
            ans += "B";
        }
    }
    cout << ans << "\n";
}