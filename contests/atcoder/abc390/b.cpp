#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<double> num(n,0);
    for(int i = 0 ; i < n; i++){
        cin >> num[i];
    }
    double r = (num[1]/num[0]);
    for(int i = 1; i < n; i++){
        double x = num[i]/num[i-1];
        if(r != x){
            cout << "No" << "\n";
            return 0;
        }
    }
    cout << "Yes" << "\n";
}