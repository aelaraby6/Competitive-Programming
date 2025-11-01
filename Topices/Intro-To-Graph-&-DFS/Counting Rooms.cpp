// https://vjudge.net/problem/CSES-1192

#include <bits/stdc++.h>
using namespace std;

#define Fast ios::sync_with_stdio(false); cin.tie(nullptr);

int n, m;
vector<string> grid;
vector<vector<bool>> visited;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

bool isValid(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m &&
           grid[x][y] == '.' && !visited[x][y];
}

void DFS(int x, int y) {
    visited[x][y] = 1;

    for (int i = 0 ; i< 4 ; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (isValid(nx, ny))
            DFS(nx, ny);
    }
}


void solve() {
    cin >> n >> m;

   grid.resize(n);
    visited.assign(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++) {
       cin>>grid[i];
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '.' && !visited[i][j]) {
                DFS(i, j);
                ans++;
            }
        }
    }
    cout<<ans<<"\n";



}

int main() {
    Fast;
    solve();
    return 0;
}
