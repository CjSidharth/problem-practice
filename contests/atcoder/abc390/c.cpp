#include <bits/stdc++.h>
using namespace std;
int main(){
  int h,w;
  cin >> h >> w;
  string s[1000];
  int rmax = -1,rmin = 1000,cmin = 1000,cmax = -1;
  for(int i = 0; i < h ; i++){
    cin >> s[i];
    for(int j = 0; j < w; j++){
      if(s[i][j] == '#'){
        rmax = max(rmax,i);
        rmin = min(rmin,i);
        cmin = min(cmin,j);
        cmax = max(cmax,j);
      }
    }
  }
  for(int i = rmin; i <= rmax; i++){
    for(int j = cmin; j <= cmax; j++){
      if(s[i][j] == '.'){
        cout << "No" << "\n";
        return 0;
      }
    }
  }
  cout << "Yes" << "\n";
}