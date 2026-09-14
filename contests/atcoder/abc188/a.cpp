#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin >> x >> y;
    int a = min(x,y);
    int b = max(x,y);
    if(b-a < 3){
        cout << "Yes" << "\n";
    }
    else{
        cout << "No" << "\n";
    }
}