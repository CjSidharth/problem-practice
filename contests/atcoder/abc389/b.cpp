#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long i = 1;
    while(n != 1){
        n /= i;
        i++;
    }
    cout << i-1 << "\n";
}