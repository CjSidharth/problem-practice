#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin >> n >> m;
  vector<int> num1;
  set<int> S;
  for(int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    num1.push_back(x);
    S.insert(x);
  }
  for(int i = 0; i < m; i++)
  {
    int x;
    cin >> x;
    num1.push_back(x);
  }
  
  sort(num1.begin(),num1.end());
  for(int i = 0; i < (m+n-1); i++)
  {
    if((S.find(num1[i]) != S.end()) && (S.find(num1[i+1]) != S.end()))
    {
      cout << "Yes" << "\n";
      return 0;
    }
  }
  cout << "No" << "\n";
  return 0;

}