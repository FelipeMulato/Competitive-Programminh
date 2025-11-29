[cite_start]// Dijkstra [cite: 1136, 1139, 1141]
#define ll long long
const ll LINF = 1e18;
vector<pair<int, int>> adj_w[MAXN]; // {vizinho, peso}
ll dist[MAXN];

void dijkstra(int start, int n) {
    for(int i=0; i<=n; i++) dist[i] = LINF;
    dist[start] = 0;
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
    pq.push({0, start});

    while (!pq.empty()) {
        auto [d, u] = pq.top(); pq.pop();
        if (d > dist[u]) continue;

        for (auto [v, w] : adj_w[u]) {
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
}