#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >> n;
    long long x = 0;
    for(int i = 0; i < n.size(); i++)
    {
        long long y =  n[i]-'0';
        x += y;
    }
    long long s = stoi(n);
    if(s%x == 0)
    {
        cout << "Yes" << "\n";
    }
    else
    {
        cout << "No" << "\n";
    }

}