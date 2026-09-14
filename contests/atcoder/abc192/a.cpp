#include <bits/stdc++.h>
using namespace std;
int main(){
    long long x;
    cin >> x;
    long long y = x/100;
    cout << (y+1)*100 - x << "\n";
    return 0;
}