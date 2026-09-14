#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    string s3 = s1+s2;
    int n = stoi(s3);
    if(ceil(sqrt(n)) == floor(sqrt(n)))
    {
        cout << "Yes" << "\n";
    }
    else
    {
        cout << "No" << "\n";
    }
}