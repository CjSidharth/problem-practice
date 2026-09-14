#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> t_n;
    vector<pair<int,int>> num;
    for(int i = 0; i < n; i++){
        int t,l,r;
        cin >> t >> l >> r;
        t_n.push_back(t);
        num.push_back(make_pair(l,r));
    }
    
    

    return 0;
}