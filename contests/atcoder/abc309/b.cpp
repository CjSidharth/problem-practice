#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<vector<int>> num(n,vector<int>(n,0));

    for(int i = 0; i < n; i++){
        string x;
        cin >> x;
        for(int j = 0; j < n; j++){
            if(x[j] == '1'){
                num[i][j] == 1;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << num[i][j];
        }
        cout << "\n";
    }
}