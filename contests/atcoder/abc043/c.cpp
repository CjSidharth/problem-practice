#include <bits/stdc++.h>
using namespace std;
const int infinity = INT_MAX;
int main()
{
   int n;
   cin >> n;
   vector<int> num;
   for(int i = 0 ; i < n; i++)
   {
      int x;
      cin >> x;
      num.push_back(x);   
   }
   int y = 1;
   for(int i = 0; i < n-1; i++)
   {
      if(num[i] == num[i+1])
      {
         y++;
      }
   }
   if(y == num.size())
   {
      cout << 0 << "\n";
      return 0;
   }
   vector<int> s;
   int ans = infinity;
   for(int i = -100; i <= 100; i++)
   {
      int sum = 0;
      for(int j = 0; j < n; j++)
      {
         sum += (num[j]-i)*(num[j]-i);
      }
      ans = min(ans,sum); 
   }
   cout << ans << "\n";
   return 0;
}