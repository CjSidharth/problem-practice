#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    set<int> num{0,1,2,3,4,5,6,7,8,9};
    set<int> S,result;
    for(int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        S.insert(x);
    }
    set_difference(num.begin(),num.end(),S.begin(),S.end(),inserter(result,result.end()));
    string x = to_string(n);
    string ans = "";
    for(int i = 0; i < x.size(); i++)
    {
        for(auto y: result)
        {
            string f = to_string(y);
            cout << f << "\n";
            if((x[i]-'0') <= y)
            {
                ans += f;
                break;
            }
        }
    }

    cout << ans << "\n";
}