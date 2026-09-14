#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    queue<int> num;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        num.push(x);
    }
    int empty = k;
    int attr = 0;
    bool c = true;
    while(c)
    {
        if(num.size() == 0)
        {
            attr++;
            c = false;
        }
        if(num.front() > empty)
        {
            attr++;
            empty = k;
        }
        else
        {
            empty -= num.front();
            num.pop();
        }
    }
    cout << attr << "\n";
}