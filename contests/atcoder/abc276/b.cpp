#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  cin >> n >> m;
  map<int,set<int>> mp;
  for(int i = 1; i <= m; i++){
    int x,y;
    cin >> x >> y;
    mp[x].insert(y);
    mp[y].insert(x);
  }
  for(int i = 1; i <= n; i++){
    cout << mp[i].size() << " ";
    for(auto x : mp[i]){
      cout << x << " ";
    }
    cout << "\n";
  }
}
