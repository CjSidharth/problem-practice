#include <bits/stdc++.h>
using namespace std;
int main()
{
    int H,W,h,w;
    cin >> H >> W >> h >> w;
    int area = H*W;
    int rowarea = h*W;
    int remarea = (H-h)*w;
    int ans = area-rowarea-remarea;
    cout << ans << "\n";
}