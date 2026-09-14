#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> h(n);
    for(int i = 0; i < n; i++) cin >> h[i];
    int res = 0;
    for(int k = 0; k < n; k++){
        int ans = 0, height = 0, current = 0;
        for(int i = 0; i < n; (k == 0) ? i++ : i += k){
            if(height != h[i]){
                current = 0;
                height = h[i];
            }
            current++;
            ans = max(ans,current);
        }
        res = max(res,ans);
    }
    
     (res == 1) ? cout << 1 << "\n" : cout << res+1 << "\n";
}