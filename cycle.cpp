[cite_start]// Detecção de Ciclo [cite: 920, 922]
bool tem_ciclo(int u, int p = -1) {
    vis[u] = true;
    for (int v : adj[u]) {
        if (v == p) continue;
        if (vis[v]) return true; // Ciclo encontrado
        if (tem_ciclo(v, u)) return true;
    }
    return false;
}