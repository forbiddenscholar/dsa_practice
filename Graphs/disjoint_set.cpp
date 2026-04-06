#include <bits/stdc++.h>
using namespace std;

class DisjointSet{
    vector <int> rank, parent, size;
public:
    DisjointSet(int n){
        rank.resize(n+1, 0);
        parent.resize(n+1);
        for(int i=0; i<=n; i++){
            parent[i] = i; //each element is the parent of itself initially
        }
        size.resize(n+1);
    }

    int findUpar(int node){
        // find the ultimate parent of the given node
        if(parent[node] == node)
            return node;
        return parent[node] = findUpar(parent[node]);
    }

    void unionByRank(int u, int v){
        int ulp_u = findUpar(u);
        int ulp_v = findUpar(v);

        if(ulp_u == ulp_v)  
            return;

        else if(rank[ulp_u] < rank[ulp_v])
            parent[ulp_u] = ulp_v;
        else if(rank[ulp_u] > rank[ulp_v])
            parent[ulp_v] = ulp_u;

        else{
            parent[ulp_u] = ulp_v;
            rank[ulp_v]++;
        }
    }
    void unionBySize(int u, int v){
        int ulp_u = findUpar(u);
        int ulp_v = findUpar(v);

        if(ulp_u == ulp_v)  
            return;
        if (size[ulp_u] < size[ulp_v]){
            parent[ulp_u] = ulp_v;
            size[ulp_u] += size[ulp_v];
        }
        else{
            parent[ulp_v] = ulp_u;
            size[ulp_v] += size[ulp_u];
        }
    }
};

int main(){
    DisjointSet ds(7);
    ds.unionBySize(1, 2);
    ds.unionBySize(2, 3);
    ds.unionBySize(4, 5);
    ds.unionBySize(6, 7);
    ds.unionBySize(5, 6);

    // check if 3 and 7 belong to the same component or not
    if (ds.findUpar(3) == ds.findUpar(7)) cout << "Same\n";
    else cout << "Not same\n";
    ds.unionByRank(3, 7);
    if (ds.findUpar(3) == ds.findUpar(7)) cout << "Same\n";
    else cout << "Not same\n";

    return 0;
}