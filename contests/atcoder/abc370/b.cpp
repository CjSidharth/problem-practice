#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<vector<int>> num;
    for(int i = 1; i <= n; i++){
        vector<int> x;
        for(int j = 1; j <= i; j++){
            int a;
            cin >> a;
            x.push_back(a);
        }
        num.push_back(x);
    }
    int temp = 1;
    for(int j = 1; j <= n; j++){
        if(temp < j){
            temp = num[j-1][temp-1]; 
        }
        else{
            temp = num[temp-1][j-1];
        }
    }
    cout << temp << "\n";
    return 0;
}