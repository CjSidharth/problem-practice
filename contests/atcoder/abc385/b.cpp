#include <bits/stdc++.h>
using namespace std;
int main(){
    int h,w,x,y;
    cin >> h >> w >> x >> y;
    vector<string> s(h);
    for(int i = 0; i < h; i++){
        cin >> s[i];
    }
    string t;
    cin >> t;
    set<pair<int,int>> ss;
    for(char c : t){
        int nx = x, ny = y;
        if(c == 'U'){
            nx--;
        }
        else if(c == 'D'){
            nx++;
        }
        else if(c == 'L'){
            ny--;
        }
        else{
            ny++;
        }
        char temp = s[nx-1][ny-1];
        if(temp != '#'){
            if(temp == '@'){
                ss.insert(make_pair(nx-1,ny-1));
            }
            x = nx;
            y = ny;
        }
    }
    cout << x << " " << y << " " << ss.size() << "\n";
}