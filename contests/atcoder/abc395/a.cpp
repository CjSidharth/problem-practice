#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector<int> num;
    cin >> n;
    for(int i = 0 ; i < n; i++){
        int x;
        cin >> x;
        num.push_back(x);
    }
    for(int i = 0; i < n-1; i++){
        if(num[i] >= num[i+1]){
            cout << "No" << "\n";
            return 0;
        }
    }
    cout << "Yes" << "\n";
    return 0;
}