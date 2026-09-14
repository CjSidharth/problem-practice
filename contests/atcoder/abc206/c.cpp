#include <bits/stdc++.h>
using namespace std;
int main(){
  long long n;
  cin >> n;
  long long sp = n*(n-1)/2;
  map<long long,long long> mp;
  for(long long i = 0; i < n; i++){
    long long x;
    cin >> x;
    mp[x]++;
  }
  for(auto x : mp){
    sp -= x.second*(x.second-1)/2;
  }
  cout << sp << "\n";
}