#include <bits/stdc++.h>
using namespace std;
vector<long long> num;
vector<long long> seq;
long long n;
int op(vector<long long> seq)
{
    long long s  = seq.size();
    if(seq.size() == 1)
    {
        return 0;
    }
    if(seq[s-1] != seq[s-2])
    {
            return 0;
    }
    if(seq[s-1] == seq[s-2])
    {
        long long x = seq[s-1];
        if(x == 0)
        {
            seq.pop_back();
            seq.pop_back();
            seq.push_back(1);
        }
        else
        {
            seq.pop_back();
            seq.pop_back();
            seq.push_back(2*x);
        }
        op(seq);
        return 0;
    }
    return 0;
}

int main()
{
    cin >> n;
    for(long long i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        num.push_back(x);
    }
    for(long long i = 0; i < n; i++)
    {
        seq.push_back(num[i]);
        if(op(seq) == 0)
        {
            continue;
        }

    }
    cout << seq.size() << "\n";
}