#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long t = 0;
    vector<long long> head;
    for(int i = 0; i < n; i++)
    {
        long long x,y;
        cin >> x >> y;
        t += x;
        head.push_back(y-x);
    }
    sort(begin(head),end(head));
    cout << t + head[n-1] << "\n";

}