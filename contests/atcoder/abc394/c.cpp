#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int n = s.size();
    int streak = 0;
    bool start = false;
    string ans = "";
    for(int i = 0;  i < n; i++){
        if(s[i] == 'W' && start  == false){
            start = true;
            streak++;
        }
        else if(s[i] != 'W' && s[i] != 'A' && start == true){
            ans += s[i];
            start = false;
            streak = 0;
        }
        else if(s[i] == 'A' && streak != 0 && start == true){
            ans += 'A';
            for(int i = 0; i < streak; i++) ans += 'C';
            streak = 0;
            start = false;
        }
        else{
            continue;
        }
    }
    cout << ans << "\n";
    return 0;
}