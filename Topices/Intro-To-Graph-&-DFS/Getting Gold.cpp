#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<string> grid;
vector<vector<bool>> visited;

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

int g;

void DFS(int x, int y) {
    if (visited[x][y] || grid[x][y] == '#') return;

    visited[x][y] = true;

    if (grid[x][y] == 'G') g++;

    if (has_trap(x, y)) return;

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (in_bounds(nx, ny)) {
            DFS(nx, ny);
        }
    }
}

void solve() {
    while (cin >> m >> n) {
        grid.assign(n, "");
        visited.assign(n, vector<bool>(m, false));
        g = 0;

        for (int i = 0; i < n; i++)
            cin >> grid[i];

        int x = -1, y = -1;
        bool found = false;

        for (int i = 0; i < n && !found; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 'P') {
                    x = i; y = j;
                    found = true;
                    break;
                }
            }
        }

        DFS(x, y);
        cout << g << "\n";
    }


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

  solve();
}