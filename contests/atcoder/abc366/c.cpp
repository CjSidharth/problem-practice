#include <bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin >> q;
    vector<pair<int,int>> num(q);
    vector<int> ans;
    int si = 0;
    multiset<int> bag;
    for(auto& x : num){
        cin >> x.first;
        if(x.first == 1){
            cin >> x.second;
            if(bag.count(x.second) == 0){
                si++;
            }
            bag.insert(x.second);
        }
        else if(x.first == 2){
            cin >> x.second;
            if(bag.count(x.second) == 1){
                si--;
            }
            bag.erase(bag.find(x.second));
        }
        else{
            ans.push_back(si);
        }
    }

    for(auto x : ans){
        cout << x << "\n";
    }
    return 0;
}