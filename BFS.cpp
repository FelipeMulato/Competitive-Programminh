[cite_start]// BFS Clássica para distâncias sem peso [cite: 752, 757, 762]
int dist[MAXN]; // Inicializar com -1 ou INF
void bfs(int start) {
    memset(dist, -1, sizeof(dist));
    dist[start] = 0;
    queue<int> q;
    q.push(start);

    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int v : adj[u]) {
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
}