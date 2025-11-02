// https://codeforces.com/problemset/problem/893/C

#include <bits/stdc++.h>
using namespace std;

#define Fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int n, m;
vector<string> grid;
vector<vector<bool>> visited;

vector<vector<int>> vec;
vector<int> vis;


int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

bool isValid(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m &&
           grid[x][y] == '.' && !visited[x][y];
}


vector<vector<int>>cons;
vector<int>c;

void DFS(int u) {
    vis[u] = 1;
    c.push_back(u);
    for(int v : vec[u]) {
        if(!vis[v]) DFS(v);
    }
}


void solve() {
    cin >> n >> m;

    vec.resize(n+1,{});
    vis.resize(n+1,0);

    vector<int>g(n);

    for (int i = 0; i < n; i++) cin >> g[i];


    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }

    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            c.clear();
            DFS(i);
            cons.push_back(c);
        }
    }

    ll total = 0;

    for (auto c : cons) {
        int minn = INT_MAX;
        for (auto x : c) {
            minn = min(minn, g[x-1]);
        }
        total += minn;
    }
    cout << total << endl;


}

int main() {
    Fast;
    solve();
    return 0;
}