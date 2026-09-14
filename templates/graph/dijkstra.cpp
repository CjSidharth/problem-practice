// Dijkstra: single-source shortest paths, non-negative weights. O((V+E) log V)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> dijkstra(const vector<vector<pair<int, ll>>>& adj, int src) {
    vector<ll> dist(adj.size(), LLONG_MAX);
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<>> pq;
    dist[src] = 0;
    pq.push({0, src});
    while (!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();
        if (d != dist[u]) continue;
        for (auto [v, w] : adj[u]) {
            if (d + w < dist[v]) {
                dist[v] = d + w;
                pq.push({dist[v], v});
            }
        }
    }
    return dist;
}
