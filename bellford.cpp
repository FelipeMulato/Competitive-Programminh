[cite_start]// Bellman-Ford [cite: 1432, 1437, 1441]
struct Edge { int u, v, w; };
vector<Edge> edges;
void bellman_ford(int start, int n) {
    fill(dist, dist + n + 1, LINF);
    dist[start] = 0;
    
    // Relaxamento N-1 vezes
    for (int i = 0; i < n - 1; i++) {
        for (auto e : edges) {
            if (dist[e.u] != LINF && dist[e.u] + e.w < dist[e.v])
                dist[e.v] = dist[e.u] + e.w;
        }
    }
    // Checagem de ciclo negativo
    for (auto e : edges) {
        if (dist[e.u] != LINF && dist[e.u] + e.w < dist[e.v]) {
            // Existe ciclo negativo!
        }
    }
}