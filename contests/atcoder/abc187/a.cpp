#include <bits/stdc++.h>
using namespace std;
int s(int n){
    int ans = 0;
    while(n > 0){
        ans += n%10;
        n /= 10;
    }
    return ans;
}
int main(){
    int a,b;
    cin >> a >> b;
    int x = s(a);
    int y = s(b);
    cout << max(x,y) << "\n";
    return 0;
}