#include <bits/stdc++.h>

using namespace std;

const int N = 1e4 + 10;
vector<int> tr[N];
int f[N][2], v[N], Happy[N], n;
void dfs(int u) {
    f[u][0] = 0; f[u][1] = Happy[u];
    for (auto v : tr[u]) {
        dfs(v);
        f[u][0] += max(f[v][0], f[v][1]);
        f[u][1] += f[v][0];
    }
}
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> Happy[i];
    for (int i = 1, x, y; i < n; ++i) {
        cin >> x >> y;
        v[x] = 1;// x has a father
        tr[y].push_back(x);
    }
    int root;
    for (int i = 1; i <= n; ++i)
        if (!v[i]) {root = i; break;}
    dfs(root);
    cout << max(f[root][0], f[root][1]) << "\n";
}