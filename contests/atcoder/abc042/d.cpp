#include <bits/stdc++.h>

using namespace std;

int main(){
    int h, w, a, b;
    cin >> h >> w >> a >> b;

    vector<vector<int>> num(h, vector<int>(w, 0));

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if((h-a <= i && i <= h-1) && (0 <= j && j <= b-1)){
                num[i][j] = 0;
            }
            else if(i == 0 || j == 0){
                num[i][j] = 1;
            }
        }
    } 

    for(int i = 1; i < h; i++){
        for(int j = 1; j < w; j++){
            if((h-a <= i && i <= h-1) && (0 <= j && j <= b-1)){
                num[i][j] = 0;
            }
            else{
                num[i][j] += (num[i-1][j] + num[i][j-1]);
            }
        }
    }

    cout << num[h-1][w-1] << "\n";
    return 0;
}
