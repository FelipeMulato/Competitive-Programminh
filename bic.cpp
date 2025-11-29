[cite_start]// Checagem de Bipartido [cite: 817, 822, 825]
int color[MAXN]; // 0 ou 1, inicializar vis[] como false
bool is_bipartite(int u, int c) {
    vis[u] = true;
    color[u] = c;
    for (int v : adj[u]) {
        if (!vis[v]) {
            if (!is_bipartite(v, !c)) return false;
        } else if (color[v] == color[u]) {
            return false;
        }
    }
    return true;
}