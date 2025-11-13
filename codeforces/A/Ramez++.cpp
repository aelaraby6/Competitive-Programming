// https://codeforces.com/group/1CUdKCvauM/contest/649337/problem/A

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
        if(!vis[v]) {
            DFS(v);
        }
    }

}


void solve() {
    // cin >> n>>m ;
    //
    // vec.assign(n+1,{});
    // vis.assign(n+1,0);
    //
    // c.clear();
    // cons.clear();
    //
    //
    // for (int i = 1; i <= n; i++) {
    //     int u , v ; cin >> u >> v ;
    //     vec[u].push_back(v);
    //     vec[v].push_back(u);
    // }
    //

    int n;  cin>>n;
    vector<string> vec(n);

    for(int i = 0; i < n; i++) {
        cin>>vec[i];
    }

    int x = 0;
    for(int i = 0; i < n; i++) {
        if (vec[i].find("++") != string::npos) x++;
        else x--;

    }

    cout<<x<<endl;



}

int main() {
    Fast;
        solve();

    return 0;
}