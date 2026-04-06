#include<bits/stdc++.h>
using namespace std;

vector <int> dijkstra (int V, vector<vector<int>> adj[], int S){

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    vector <int> dist(V, 1e9); // set initial distance to infinity
    dist[S] = 0; // dist from source to source is 0
    pq.push({0, S});

    while(!pq.empty()){
        int dis = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        for(auto x : adj[node]){
            int edgeWeight = x[1];
            int adjNode = x[0];

            if(dis + edgeWeight < dist[adjNode]){
                dist[adjNode] = dis + edgeWeight;
                pq.push({dist[adjNode], adjNode});
            }
        }
    }

    return dist;
}


int main(){
    int V, E;
    cin >> V >> E;

    vector<vector<int>> adj[V];

    for(int i = 0; i < E; i++){
        int u, v, w;
        cin >> u >> v >> w;

        adj[u].push_back({v, w});
        adj[v].push_back({u, w}); //  will remove this if directed graph
    }

    int S;
    cin >> S;

    vector<int> result = dijkstra(V, adj, S);

    for(int i = 0; i < V; i++){
        cout << result[i] << " ";
    }

    return 0;
}