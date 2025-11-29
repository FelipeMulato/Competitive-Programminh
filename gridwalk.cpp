const int MAXN = 1e5 + 5;
const int INF = 1e9;
vector<int> adj[MAXN];
bool vis[MAXN];

[cite_start]// Movimentos para Grid (Cima, Baixo, Dir, Esq) [cite: 309, 310, 311]
const int dx[] = {1, 0, 0, -1};
const int dy[] = {0, 1, -1, 0};

[cite_start]// Checagem de limites no Grid [cite: 312, 779]
bool valid(int x, int y, int n, int m, vector<string>& grid) {
    return x >= 0 && x < n && y >= 0 && y < m && grid[x][y] != '#';
}