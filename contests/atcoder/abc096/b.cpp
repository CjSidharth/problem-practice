#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> num;
    for(int i = 0; i < 3; i++)
    {
        int x;
        cin >> x;
        num.push_back(x);
    }
    sort(begin(num),end(num));
    int k;
    cin >> k;
    int sum = 0;
    for(int i = 0; i < k; i++)
    {
        num[2] = 2*num[2];
        if( i < 2)
        {
            sum += num[i];
        }
    }
    cout << sum+num[2] << "\n";
    
}