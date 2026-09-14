#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin >> s >> t;
    vector<int> num;
    for(int i = 0,j=0; i < t.size(),j < s.size(); i++)
    {
        if(t[i] == s[j])
        {
            num.push_back(i+1);
            j++;
        }
    }
    for(int i = 0; i < s.size(); i++)
    {
        cout << num[i] << "\n";
    }
}