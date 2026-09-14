#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    int x = max(a+b,a-b);
    int y = max(a*b,x);
    cout << y << "\n";
}