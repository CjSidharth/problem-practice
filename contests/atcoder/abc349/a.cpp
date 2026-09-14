#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int sum = 0;
    for(int i = 0; i < x-1; i++)
    {
        int y;
        cin >> y;
        sum += y;
    }
    cout << -1*sum << "\n";

}