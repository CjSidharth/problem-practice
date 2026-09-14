#include <bits/stdc++.h>
using namespace std;
long long f(long long a,long long b){
    if(2*a <= b){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    long long n;
    cin >> n;
    vector<long long> arr(n);
    for(long long i = 0 ; i < n; i++){
        cin >> arr[i];
    }
    long long ans = 0;
    for(long long i = 0 ; i < n; i++){
        long long l = -1;
        long long r = n;
        long long m = 0;
        while(r > l + 1){
            m = (l+r)/2;
            if(f(arr[i],arr[m]) == 1){
                r = m;
            }
            else{
                l = m;
            }
        }        
        ans += (n-r);
    }
    cout << ans << "\n";
}