#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    vector<long long> num;
    long long x;
    cin >> n;
    long long sum = 0;
    for(long long i = 0; i < n; i++){
        long long a;
        cin >> a;
        sum += a;
        num.push_back(a);
    }
    cin >> x;
    long long m = x/sum;
    long long sumb = m*sum;
    long long ans = m*n;
    for(long long i = 0; i < n; i++){
        sumb += num[i];
        ans++;
        if(sumb > x){
            cout <<  ans << "\n";
            return 0;
        }
    }
    return 0;
}