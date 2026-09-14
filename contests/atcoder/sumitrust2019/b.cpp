#include <bits/stdc++.h>
using namespace std;
int main()
{
    float n;
    float x = 1.08;
    cin >> n;
    float y = ceil(n/x);
    if(floor(y*x) == n )
    {
        cout << y << "\n";
    }
    else
    {
        cout << ":(" << "\n";
    }
}