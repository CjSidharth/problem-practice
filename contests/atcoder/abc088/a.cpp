#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin >> n >> a;
    int x = n%500;
    if(x > a)
    {
        cout << "No" << "\n";
    }
    else
    {
        cout << "Yes" << "\n";
    }
}