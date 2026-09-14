#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long a,b;
  cin >> a >> b;
  if(a*b <= 0)
  {
    cout << "Zero" << "\n";
  }
  else if (a > 0 && b > 0)
  {
    cout << "Positive" << "\n";
  }
  else
  {
    if((abs(abs(b)-abs(a))+1)%2 == 0)
    {
      cout << "Positive" << "\n";
    }
    else
    {
      cout << "Negative" << "\n";
    }
  }
}