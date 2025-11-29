[cite_start]// Kruskal MST [cite: 1862, 1869, 1874]
struct Edge { int u, v, w; 
    bool operator<(Edge const& other) { return w < other.w; }
};
vector<Edge> edges;

ll kruskal(int n) {
    sort(edges.begin(), edges.end());
    init_dsu(n);
    ll cost = 0;
    for (auto e : edges) {
        if (find(e.u) != find(e.v)) {
            join(e.u, e.v);
            cost += e.w;
        }
    }
    return cost;
}