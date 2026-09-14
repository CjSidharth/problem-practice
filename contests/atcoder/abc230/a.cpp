#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  if(n <= 9)
  {
    cout << "AGC00" << to_string(n) << "\n";
  }
  else if(n <= 41)
  {
    cout << "AGC0" << to_string(n) << "\n";
  }
  else
  {
    cout << "AGC0" << to_string(n+1) << "\n";
  }
}