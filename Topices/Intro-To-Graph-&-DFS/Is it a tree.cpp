// https://vjudge.net/problem/SPOJ-PT07Y

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Fast ios::sync_with_stdio(false); cin.tie(nullptr);

int n , m;
vector<vector<int>> vec;
vector<int> vis;

void DFS(int u) {
    vis[u] = 1;
    for(int v : vec[u]) {
        if(!vis[v]) DFS(v);
    }
}

void Abdo() {
    cin >> n >> m;
    int ans =0;

    vec.resize(n+1,{});
    vis.resize(n+1,0);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }

    for(int i = 1; i <= n; i++) {
        if (!vis[i]) {
            ans++;
            DFS(i);
        }
    }
    if (ans == 1 && m == n -1) {
        cout << "YES" << endl;

    }
    else {
        cout << "NO" << endl;
    }

}

int main() {
    Fast;

    Abdo();

    return 0;
}
