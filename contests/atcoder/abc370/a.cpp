#include <bits/stdc++.h>
using namespace std;
int main(){
    int l,r;
    cin >> l >> r;
    if((l == 0 && r == 0) || (l == 1 && r == 1)){
        cout << "Invalid" << "\n";
    }
    else if(l == 1){
        cout << "Yes" << "\n";
    }
    else{
        cout << "No" << "\n";
    }
    return 0;
}