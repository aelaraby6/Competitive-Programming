#include <bits/stdc++.h>
using namespace std;

#define Fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int n, m;
vector<string> grid;
vector<vector<bool>> visited;

map<ll, vector<ll>> vec;
map<ll, int> vis;


int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

bool isValid(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m &&
           grid[x][y] == '.' && !visited[x][y];
}


vector<vector<int>>cons;
vector<ll>c;

void DFS(ll u) {
    vis[u] = 1;
    c.push_back(u);
    for(ll v : vec[u]) {
        if(!vis[v]) {
            DFS(v);
        }
    }
}


void solve() {
    cin >> n;  

    vec.clear();
    vis.clear();

    c.clear();
    cons.clear();

    set<ll>st;

    for (int i = 0; i < n; i++) {
        ll u, v;
        cin >> u >> v;
        st.insert(v);
        st.insert(u);
        vec[u].push_back(v);
        vec[v].push_back(u);
    }

    ll s = 0;

    for (auto u : st) {
        if (vec[u].size() == 1) {
            s = u;
            break;
        }
    }

    DFS(s);

    for (auto x : c) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    Fast;
    solve();
    return 0;
}