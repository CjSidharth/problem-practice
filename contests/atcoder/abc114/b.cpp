#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> num;
    for(int i = 0; i < s.size()-2; i++)
    {
        string x = "";
        x += s[i];
        x += s[i+1];
        x += s[i+2];
        int y = stoi(x);
        int diff = abs(753-y);
        num.push_back(diff);
    }
    sort(begin(num),end(num));
    cout << num[0] << "\n";

}