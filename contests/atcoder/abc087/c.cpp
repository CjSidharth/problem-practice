#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<vector<int>> num;
  for(int i = 0; i < 2; i++){
    vector<int> y;
    for(int j = 0; j < n; j++){
      int x;
      cin >> x;
      y.push_back(x);
    }
    num.push_back(y);
  }
  int ans = num[0][0];
  int i = 0, j = 0;
  while(i != 1 && j != n-1){
    int a = i+1, b = j+1;
    if(a == 2 && b < n){
        ans += num[i][b];
        j = b;
    }
    else if(a == 1 && b == n){
        ans += num[a][j];
        i = a;
    }
    else{
        if(num[a][j] > num[i][b]){
            ans += num[a][j];
            i = a;
        }
        else{
            ans += num[i][b];
            j = b;
        }
    }
  }
  cout << ans << "\n";
}
