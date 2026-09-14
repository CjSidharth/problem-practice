#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,x;
  cin >> n >> x;
  int ans = 0;
  vector<int> num;
  int sum = 0;
  for(int i = 0 ; i < n; i++)
  {
    int l;
    cin >> l;
    sum += l;
    num.push_back(l);
  }
  ans += n;
  x -= sum;
  sort(num.begin(),num.end());
  ans += (x/num[0]);
  cout << ans << "\n";
  
}