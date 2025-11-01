// https://cses.fi/problemset/task/1666

#include <bits/stdc++.h>
using namespace std;

#define Fast ios::sync_with_stdio(false); cin.tie(nullptr);

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

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }

    int ans = 0;

    for(int i = 1; i <= n; i++) {
        if (!vis[i]) {
            c.clear();
            DFS(i);
            cons.push_back(c);
            ans++;
        }
    }

    if (ans <= 1) {
        cout << 0 << "\n";
    }
    else {
        cout<<ans-1<<"\n";
        for (int i = 0; i < cons.size()-1; i++) {
            cout<<cons[i][0]<<" "<<cons[i+1][0]<<"\n";
        }
    }


}

int main() {
    Fast;
    solve();
    return 0;
}
