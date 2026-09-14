#include <bits/stdc++.h>
using namespace std;
class DSU{
    vector<int> parent;
public:
    DSU(int size){
        parent.resize(size);
        for(int i = 0; i < size; i++){
            parent[i] = i;
        }
    }
    int find(int i){
        if(parent[i] == i){
            return i;
        }
        return find(parent[i]);
    }
    
    void unite(int i, int j){
        int irep = find(i);
        int jrep = find(j);
        parent[irep] = jrep;
    }
};

int main(){
    
}