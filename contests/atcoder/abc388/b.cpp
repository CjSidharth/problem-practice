#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,d;
    cin >> n >> d;
    vector<int> res(d,0);
    for(int i = 0; i < n; i++){
        int t,l;
        cin >> t >> l;
        for(int j = 1; j <= d; j++){
            res[j-1] = max(res[j-1],(l+j)*t);
        }
    }
    for(auto x : res){
        cout << x << "\n";
    }
}