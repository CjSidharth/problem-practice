#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string num = s.substr(3,5);
    int x = stoi(num);
    if(x == 316 || x >= 350)
    {
        cout << "No" << "\n";
        return 0;
    }
    if(x >= 1 && x <= 349)
    {
        cout << "Yes" << "\n";
        return 0;
    }
}