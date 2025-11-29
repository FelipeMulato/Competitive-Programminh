[cite_start]// DSU com Path Compression e Union by Size [cite: 1747, 1753, 1777]
int pai[MAXN], sz[MAXN];

void init_dsu(int n) {
    for (int i = 1; i <= n; i++) {
        pai[i] = i; sz[i] = 1;
    }
}

int find(int u) {
    if (pai[u] == u) return u;
    return pai[u] = find(pai[u]); // Path compression
}

void join(int u, int v) {
    u = find(u); v = find(v);
    if (u == v) return;
    if (sz[u] < sz[v]) swap(u, v); // Small to large
    pai[v] = u;
    sz[u] += sz[v];
}