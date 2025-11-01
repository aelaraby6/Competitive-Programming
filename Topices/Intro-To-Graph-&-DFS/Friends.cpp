
// https://vjudge.net/contest/690295#problem/C

#include <bits/stdc++.h>
using namespace std;

#define Fast ios::sync_with_stdio(false); cin.tie(nullptr);

int n, m;
vector<vector<int>> vec;
vector<int> vis;
vector<int> x;

void DFS(int u) {
    vis[u] = 1;
    x.push_back(u);
    for (int v : vec[u]) {
        if (!vis[v]) DFS(v);
    }
}

void solve() {
    cin >> n >> m;

    vec.clear();
    vis.clear();

    vec.resize(n + 1);
    vis.resize(n + 1, 0);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }

    int ans = 0;

    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            x.clear();
            DFS(i);
            ans = max(ans, (int)x.size());
        }
    }

    cout << ans << '\n';
}

int main() {
    Fast;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
