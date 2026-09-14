#include <bits/stdc++.h>
using namespace std;
int main(){
    int s,w;
    cin >> s >> w;
    if(s > w){
        cout << "safe" << "\n";
    }
    else{
        cout << "unsafe" << "\n";
    }
    return 0;
}