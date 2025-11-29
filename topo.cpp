[cite_start]// Toposort [cite: 868, 870, 878]
int grau[MAXN]; // Grau de entrada
vector<int> toposort(int n) {
    queue<int> q;
    for (int i = 1; i <= n; i++) 
        if (grau[i] == 0) q.push(i);

    vector<int> ordem;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        ordem.push_back(u);
        for (int v : adj[u]) {
            grau[v]--;
            if (grau[v] == 0) q.push(v);
        }
    }
    [cite_start]// Se ordem.size() != n, existe ciclo! [cite: 886]
    return ordem;
}