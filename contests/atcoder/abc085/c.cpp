#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long n,y;
  cin >> n >> y;
  for(int i = 0; i <= n; i++)
  {
    for(int j = 0; j <= n; j++)
    {
      int k = n-i-j;
      if(y == (10000*i + 5000*j + 1000*k) && k >= 0)
      {
        cout << i << " " << " " <<  j << " " << k << "\n";
        return 0;
      }
    }
  }
  cout << -1 << " " << -1 << " " << -1 << "\n";
  return 0;
}