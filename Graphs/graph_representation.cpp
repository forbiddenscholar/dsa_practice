#include<bits/stdc++.h>
using namespace std;

int main(){
    // storing a graph as list
    int v, e;
    cin >> v >> e;
    vector<int> adjList[v+1];
    for(int i=0; i<e; i++){
        int src, dst; 
        cin >> src >> dst;
        // for zero based indexing 
        adjList[src].push_back(dst);
        // for undirected graph
        adjList[dst].push_back(src);
    }
}