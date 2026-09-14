#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int index = s.size()-1;
    if(s[0] != '<' || s[index] != '>')
    {
        cout << "No" << "\n";
        return 0;
    }
    for(int i = 1; i < s.size()-1; i++)
    {
        if(s[i] != '=')
        {
            cout << "No" << "\n";
            return 0;
        }
    }
    cout << "Yes" << "\n";

}