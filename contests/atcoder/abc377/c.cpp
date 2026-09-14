#include <bits/stdc++.h>
using namespace std;
int main(){
     int m;
     long long N;
    set<pair<long long,long long>> x;
    cin >> N >> m;
    for(int i = 0; i < m; i++){
        int a,b;
        cin >> a >> b;
        x.insert({a,b});
        int temp = 8;
        if(a-2 > 0 && b-1 > 0){
            x.insert({a-2,b-1});
        }
        if(a-1 > 0 && b-2 > 0){
            x.insert({a-1,b-2});
        }
        if(a+1 <= N && b-2 > 0){
            x.insert({a+1,b-2});
        }
        if(a+2 <= N && b-1 > 0){
            x.insert({a+2,b-1});
        }
        if(a-2 > 0 && b+1 <= N){
            x.insert({a-2,b+1});
        }
        if(a-1 > 0 && b+2 <= N){
            x.insert({a-1,b+2});
        }
        if(a+1 <= N && b+2 <= N){
            x.insert({a+1,b+2});
        }
        if(a+2 <= N && b+1 <= N){
            x.insert({a+2,b+1});
        }
    }
    cout << N*N - x.size() << "\n";
}