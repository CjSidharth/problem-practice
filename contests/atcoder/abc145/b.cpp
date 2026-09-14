#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;  
  string s;
  cin >> s;
  if(n % 2 != 0){
    cout << "No" << "\n";
  }
  else{
    for(int i = 0; i < n/2; i++){
      if(s[i] != s[n/2 + i]){
        cout << "No" << "\n";
        return 0;
      }
    }
    cout << "Yes" << "\n";
    return 0;
  }
}