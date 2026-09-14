#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,m;
    vector<long long> b,w;
    cin >> n >> m;
    for(long long i = 0 ; i < n; i++){
        long long x;
        cin >> x;
        b.push_back(x);
    }
    for(long long i = 0 ; i < m; i++){
        long long x;
        cin >> x;
        w.push_back(x);
    }
    sort(b.begin(),b.end());
    sort(w.begin(),w.end());
    
}