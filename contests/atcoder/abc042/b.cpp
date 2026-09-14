#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,l;
    vector<string> seq;
    cin >> n >> l;
    for(int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        seq.push_back(x);
    }
    sort(begin(seq),end(seq));
    string ans = "";
    for(int i = 0; i < n; i++)
    {
        ans += seq[i];
    }
    cout << ans << "\n";
}