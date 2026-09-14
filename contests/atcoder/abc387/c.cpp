#include <bits/stdc++.h>
using namespace std;
bool check(long long n){
    string s = to_string(n);
    int x = s[0]-'0';
    for(int i = 1; i < s.size(); i++){
        if((s[i]-'0') >= x){
            return false;
        }
    }
    return true;

}


int main(){
    long long l,r;
    cin >> l >> r;
    long long count = 0;
    for(long long i = l; i <= r; i++){
        if(check(i) == true){
            cout << i << "\n";
        }
    }
    cout << count << "\n";
}