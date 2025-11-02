// https://codeforces.com/problemset/problem/330/B


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

    map<int,int>mp;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        mp[u]++;
        mp[v]++;
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (!mp[i]) {
            ans=i;
            break;
        }
    }

    cout<<n-1<<"\n";

    for (int i = 1; i <= n; i++) {
        if (i!=ans) {
            cout<<i << " " << ans<<"\n";
        }
    }


}

int main() {
    Fast;
    solve();
    return 0;
}