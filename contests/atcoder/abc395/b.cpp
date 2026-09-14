#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<vector<char>> s(n, vector<char> (n,'?'));
    for(int i = 1; i <= n; i++){
        int j = n + 1 - i;
        if(i <= j){
            if(i % 2 != 0){
                for(int x = i-1; x <= j-1; x++){
                    for(int y = i-1; y <= j-1; y++){
                        s[x][y] = '#';
                    }
                }
            }
            else{
                for(int x = i-1; x <= j-1; x++){
                    for(int y = i-1; y <= j-1; y++){
                        s[x][y] = '.';
                    }
                }
            }
        }
    }
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << s[i][j];
        }
        cout << "\n";
    }
}