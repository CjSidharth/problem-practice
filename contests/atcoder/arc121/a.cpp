#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long n;
  cin >> n;
  vector<pair<long long,long long>> num;
  for(long long  i = 0; i < n; i++)
  {
    long long x,y;
    cin >> x >> y;
    num.push_back(make_pair(x,y));
  }
  vector<long long> dist;
  for(long long i = 0; i < n; i++)
  {
    for(long long j = i+1; j < n; j++)
    {
      if(j == n)
      {
        break;
      }
      else
      {
        dist.push_back(max(abs(num[i].first-num[j].first),abs(num[i].second-num[j].second)));
      }
    }
  }
  sort(dist.begin(),dist.end(),greater<long long>());
  cout << dist[1] << "\n";
  return 0;
}