#include<bits/stdc++.h>
using namespace std;

vector <int> dijkstra(int V, vector <vector <int>> adj[], int S){
    set <pair <int, int>> st;
    vector <int> dist(V, 1e9);
    st.insert({0, S});
    dist[S] = 0;

    while(!st.empty()){
        auto it = *(st.begin());
        int node = it.second;
        int dis = it.first;
        st.erase(it);

        for(auto it : adj[node]){
            int adjNode = it[0];
            int edgeWt = it[1];

            //erase from the set if already over the non-infinity value
            if (dis + edgeWt < dist[adjNode]){
                if(dist[adjNode] != 1e9)
                    st.erase({dist[adjNode], adjNode});
                dist[adjNode] = dis + edgeWt;
                st.insert({dist[adjNode], adjNode});
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