#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long ans = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            for(int k = 1; k <= n; k++){
                if(i*j*k <= n){
                    ans++;
                }
            }
        }
    }
    cout << ans << "\n";
    return 0;
}