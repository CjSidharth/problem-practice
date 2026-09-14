#include <bits/stdc++.h>
using namespace std;
int main()
{
    string w;
    cin >> w;
    map<char,int> mp;
    for(int i = 0; i < w.size(); i++)
    {
        if(mp.count(w[i])){
            mp[w[i]]++;
        }
        else{
            mp[w[i]] = 1;
        }
    }
    for(auto x : mp){
        if(x.second % 2 != 0){
            cout << "No" << "\n";
            return 0;
        }
    }
    cout << "Yes" << "\n";
    return 0;
}