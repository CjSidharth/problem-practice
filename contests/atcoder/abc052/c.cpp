#include <bits/stdc++.h>
using namespace std;

vector<int> prime(int n){
    vector<int> ans;
    for(int i = 2; i <= n; i++){
        int count = 0;
        for(int j = 1; j <= sqrt(i); j++){
            if(i%j == 0){
                count++;
            }
        }
        if(count == 1){
            ans.push_back(i);
        }       
    }
    return ans;
}

long long ans(int n,vector<int> p){
    long long fin = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 0; p[j] <= i; j++){
            long long x = i;
            long long c = 0;
            while(x >= 1 && x%p[j] == 0){
                x /= p[j];
                c++;
            }
            fin += c%(1000000007);
        }
    }
    return fin;
}



int main(){
    int n;
    cin >> n;
    vector<int> p = prime(n);
    long long fin = ans(n,p);
    cout << fin << "\n";
}