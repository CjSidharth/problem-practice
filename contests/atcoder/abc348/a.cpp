#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    string s = "";
    for(int i = 0; i < x; i++)
    {
        if((i+1)%3 == 0)
        {
            s += "x";
        }
        else
        {
            s += "o";
        }
    }
    cout << s << "\n";

}