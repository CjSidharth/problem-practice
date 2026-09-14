#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for(int i = 1; i < s.size()-1; i++)
    {
        if(s[0] != s[1] && s[0] != s[2])
        {
            cout << 1 << "\n";
            break;
        }
        if(s[s.size()-1] != s[1] && s[s.size()-1] != s[0])
        {
            cout << s.size() << "\n";
            break;
        }
        if(s[i-1] != s[i] && s[i] != s[i+1] )
        {
            cout << i+1 << "\n";
            break;
        }
    }
}