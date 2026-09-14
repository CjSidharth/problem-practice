#include <bits/stdc++.h>
using namespace std;
bool dislike(int x, set<int> S)
{
    int tmp = x;
    set<int> ntmp;
    while(tmp > 0)
    {
        ntmp.insert(tmp%10);
        tmp /= 10;
    }
    set<int> intersect;
    set_intersection(S.begin(), S.end(), ntmp.begin(), ntmp.end(),inserter(intersect, intersect.begin()));
    if(intersect.size() == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    int n,k;
    cin >> n >> k;
    int x = n;
    set<int> num{0,1,2,3,4,5,6,7,8,9};
    set<int> S;
    for(int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        S.insert(x);
    }
    while(dislike(x,S) == true)
    {
        x++;
    }
    cout << x << "\n";
}