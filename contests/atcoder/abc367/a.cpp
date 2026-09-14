#include <bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c;
  cin >> a >> b >> c;
  if (b < c){
    if(b < a && a < c){
        cout << "No" << "\n";
    }
    else{
        cout << "Yes" << "\n";
    }
  }
  else{
    if(c < a && a < b){
        cout << "Yes" << "\n";
    }
    else{
        cout << "No" << "\n";
    }
  }
}