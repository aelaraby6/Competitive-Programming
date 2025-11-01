// https://codeforces.com/problemset/problem/292/B

#include <bits/stdc++.h>
using namespace std;

#define Fast ios::sync_with_stdio(false); cin.tie(nullptr);

int n, m;
vector<vector<int>> vec;
vector<int> vis;
bool c = 0;

void DFS(int u) {
    vis[u] = 1;
    for (int v : vec[u]) {
        if (!vis[v]) DFS(v);
    }
}

void DFS2(int u, int p) {
    vis[u] = 1;
    for (int v : vec[u]) {
        if (v == p) continue;
        if (!vis[v]) {
            DFS2(v, u);
        } else {
            c = 1;
        }
    }
}

void solve() {


    int n, m;
    cin >> n >> m;

    vector<int> deg(n + 1, 0);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        deg[u]++;
        deg[v]++;
    }

    int ones = 0, twos = 0, others = 0, maxDeg = 0;

    for (int i = 1; i <= n; i++) {
        if (deg[i] == 1) ones++;
        else if (deg[i] == 2) twos++;
        else others++;
        maxDeg = max(maxDeg, deg[i]);
    }

    if (m == n - 1 && ones == 2 && twos == n - 2)
        cout << "bus topology\n";
    else if (m == n && twos == n)
        cout << "ring topology\n";
    else if (m == n - 1 && ones == n - 1 && maxDeg == n - 1)
        cout << "star topology\n";
    else
        cout << "unknown topology\n";
}

int main() {
    Fast;
    solve();
    return 0;
}
