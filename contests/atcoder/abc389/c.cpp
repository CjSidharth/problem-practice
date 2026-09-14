#include <bits/stdc++.h>
using namespace std;
int main(){
    deque<pair<long long,long long>> q;
    long long n;
    long long offset = 0;
    cin >> n;
    for(long long i = 0; i < n; i++){
        int t;
        cin >> t;
        if(t == 1){
            long long l;
            cin >> l;
            if(q.size() == 0){
                q.push_back(make_pair(l,0));
            }
            else{
                q.push_back(make_pair(l,q.back().first+q.back().second));
            }
        }
        else if(t == 2){
            offset += q.front().first;
            q.pop_front();
        }
        else{
            long long k;
            cin >> k;
            cout << q[k-1].second-offset << "\n";
        }
    }
    return 0;
}