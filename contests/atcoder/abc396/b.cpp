#include <bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin >> q;
    vector<int> s(100,0);
    stack<int,vector<int>> num (s); 
    for(int i = 0; i < q; i++){
        int t;
        cin >> t;
        if(t == 1){
            int x;
            cin >> x;
            num.push(x);
        }
        else{
            cout << num.top() << "\n";
            num.pop();
        }
    }
}