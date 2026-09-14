#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,c,x,sum,ans = 0;
  cin >> a >> b >> c >> x;
  for(int i = 0; i <= a; i++)
  {
    for(int j = 0; j <= b; j++)
    {
      for(int k = 0; k <= c; k++)
      {
        sum = a*500 + b*100 + c*50;
        if(sum == x)
        {
          ans++;
        }
      }
    }
  }
  cout << ans << "\n";
}