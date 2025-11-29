[cite_start]// DFS Simples [cite: 582, 583]
void dfs(int u) {
    vis[u] = true;
    for (int v : adj[u]) {
        if (!vis[v]) dfs(v);
    }
}

[cite_start]// DFS para Componentes Conexos (Flood Fill) [cite: 984]
int componente[MAXN]; // Inicializar com -1
void dfs_comp(int u, int comp) {
    componente[u] = comp;
    for (int v : adj[u]) {
        if (componente[v] == -1) {
            dfs_comp(v, comp);
        }
    }
}

[cite_start]// Lógica do Diâmetro [cite: 961, 962]
// 1. Rode BFS a partir de um nó qualquer (ex: 1) para achar o mais distante (ponto A).
// 2. Rode BFS a partir de A para achar o mais distante dele (ponto B).
// 3. A distância entre A e B é o diâmetro.