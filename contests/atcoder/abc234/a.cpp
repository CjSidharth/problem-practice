#include <bits/stdc++.h>
using namespace std;
long long f(long long x)
{
  return (x*x + 2*x + 3);
}
int main()
{
  long long x;
  cin >> x;
  cout << f(f(f(x)+x)+f(f(x))) << "\n";
}