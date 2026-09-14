#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> num;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        num.push_back(x);
    }
    vector<int> dp(n,0);
    for(int i = 1; i < n; i++){
        if(i == 1){
            dp[i] = abs(num[i]-num[0]);
        }
        else{
            dp[i] = min(abs(num[]))
        }
    }
}