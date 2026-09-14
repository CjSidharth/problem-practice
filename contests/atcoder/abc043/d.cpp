#include <bits/stdc++.h>
using namespace std;
int main(){
    string x;
    cin >> x;
    int n = x.size();
    for(int i = 0; i < n; i++){
        if(i < n-2){
            if(x[i] == x[i+2]){
                cout << i+1 << " " << i+3 << "\n";
                return 0;
            }
        }
        if(i < n-1){
            if(x[i] == x[i+1]){
                cout << i+1 << " " << i+2 << "\n";
                return 0;
            }
        }
    }
    cout << -1 << " " << -1 << "\n";
    return 0;
}