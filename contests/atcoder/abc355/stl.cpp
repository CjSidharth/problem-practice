#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
int nxt()
{
    int x;
    cin >> x;
    return x;
}

int main()
{
    int n = nxt();
    vector<int> a(n);
    generate(all(a),nxt);
}