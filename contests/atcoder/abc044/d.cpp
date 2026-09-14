#include <bits/stdc++.h>
using namespace std;
long long sum(long long b,long long n){
    if(n < b){
        return n;
    }
    else{
        return sum(b,floor(n/b)) + n%b;
    }
}
int main(){
    long long n,s;
    cin >> n >> s;
    if(n < s){
        cout << -1 << "\n";
        return 0;
    }
    else if (n == s){
        cout << n+1 << "\n";
        return 0;
    }
    else{
        for(long long i = 2; i <= sqrt(n); i++){
            if(sum(i,n) == s){
                cout << i << "\n";
                return 0;
            }
        }
        long long x = sqrt(n-s);
        while (x >= 1){
            long long b = (n-s)/x + 1;
            if(sum(b,n) == s){
                cout << b << "\n";
                return 0;
            }
            x--;
        }
    }
    
    cout << -1 << "\n";
    return 0;
}