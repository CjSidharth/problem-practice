#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> vec;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        vec.push_back(x);
    }
    for(int i = 0; i <= n-2; i++){
        if(vec[i] == vec[i+1] && vec[i+1] == vec[i+2]){
            cout << "Yes" << "\n";
            return 0;
        }
    }
    cout << "No" << "\n";
    return 0;
}