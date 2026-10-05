// Dijkstra — menor caminho com pesos não negativos
// O((V + E) log V). adj[u] = {v, peso}
vector<long long> dijkstra(const vector<vector<pair<int, long long>>>& adj, int s) {
    const long long INF = LLONG_MAX;
    vector<long long> dist(adj.size(), INF);
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>> pq;
    dist[s] = 0;
    pq.push({0, s});
    while (!pq.empty()) {
        auto [d, u] = pq.top(); pq.pop();
        if (d != dist[u]) continue;
        for (auto [v, w] : adj[u]) {
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
    return dist;
}
