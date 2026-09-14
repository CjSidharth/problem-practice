#include <bits/stdc++.h>
using namespace std;
int main()
{
    int team1 = 0,team2 = 0;
    for(int i = 0; i < 9; i++)
    {
        int x;
        cin >> x;
        team1 += x;
    }
    for(int i = 0; i < 8; i++)
    {
        int x;
        cin >> x;
        team2 += x;
    }
    cout << team1-team2+1 << "\n";

}