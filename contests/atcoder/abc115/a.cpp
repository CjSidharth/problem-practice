#include <bits/stdc++.h>
using namespace std;
int main()
{
    int d;
    cin >> d;
    string s = "Christmas";
    int n = 25-d;
    for(int i = 1; i <= n; i++)
    {
        s += " Eve";
    }
    cout << s << "\n";
}