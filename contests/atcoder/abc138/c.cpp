#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<float> num;
    for(int i = 0; i < n; i++)
    {
        float x;
        cin >> x;
        num.push_back(x);
    }
    sort(begin(num),end(num));
    float avg = (num[0]+num[1])/2;
    for(int i = 2; i < n; i++)
    {
        avg = (avg+num[i])/2;
    }
    cout << avg << "\n";
}