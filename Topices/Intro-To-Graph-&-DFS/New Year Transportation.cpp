#include <bits/stdc++.h>
using namespace std;

int n, m,t;
vector<string> grid;
vector<vector<bool>> visited;

vector<int>vis;
vector<vector<int>>vec;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

bool in_bounds(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

bool has_trap(int x, int y) {
    return (in_bounds(x + 1, y) && grid[x + 1][y] == 'T') ||
        (in_bounds(x - 1, y) && grid[x - 1][y] == 'T') ||
        (in_bounds(x, y + 1) && grid[x][y + 1] == 'T') ||
        (in_bounds(x, y - 1) && grid[x][y - 1] == 'T');
}


void DFS(int u) {
   vis[u] = 1;
    for (auto v : vec[u]) {
        if (!vis[v])
            DFS(v);
    }
}

void solve() {
     cin>>n>>t;

    vec.assign(n+1,{});
    vis.assign(n+1,0);

    for (int i = 1; i < n; i++) {
        int x; cin>>x;
        vec[i].push_back(i+x);
    }

     DFS(1);
    if (vis[t]) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}