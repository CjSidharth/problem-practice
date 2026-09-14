#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int x = s.size();
    int ns = 0;
    int we = 0;
    for(int i = 0; i < x; i++)
    {
        if(s[i] == 'N')
        {
            ns++;
        }
        else if(s[i] == 'S')
        {
            ns--;
        }
        else if(s[i] == 'W')
        {
            we++;
        }
        else
        {
            we--;
        }
    }
    if(we == 0 && ns == 0)
    {
        cout << "Yes" << "\n";
    }
    else
    {
        cout << "No" << "\n";
    }
}