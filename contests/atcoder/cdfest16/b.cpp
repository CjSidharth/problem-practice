#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b;
    string s;
    cin >> n >> a >> b >> s;
    vector<bool> ans;
    long long pass = 0;
    long long osea = 1;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'a' && pass < (a + b))
        {
            ans.push_back(true);
            pass++;
        }
        else if (s[i] == 'b' && osea <= b && pass < (a+b))
        {
            osea++;
            ans.push_back(true);
            pass++;
        }
        else
        {
            ans.push_back(false);
        }
        
    }

    for(auto x: ans)
    {
        if(x == true)
        {
            cout << "Yes" << "\n";
        }
        else
        {
            cout << "No" << "\n";
        }
    }
}