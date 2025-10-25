#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Fast ios::sync_with_stdio(false); cin.tie(nullptr);

int N, M, X;
vector<int> C;
vector<vector<int>> A;

const int INF = 1e9;


int solve(int i, vector<int> level) {
    if (i == N) {
        for (int j = 0; j < M; j++)
            if (level[j] < X) return INF;
        return 0;
    }

    int res = solve(i + 1, level);

    vector<int> new_level = level;

    for (int j = 0; j < M; j++)
        new_level[j] += A[i][j];

    res = min(res, C[i] + solve(i + 1, new_level));

    return res;
}

int main() {
    Fast;

    cin >> N >> M >> X;
    C.resize(N);
    A.assign(N, vector<int>(M));

    for (int i = 0; i < N; i++) {
        cin >> C[i];
        for (int j = 0; j < M; j++) cin >> A[i][j];
    }

    vector<int> level(M, 0);

    int ans = solve(0, level);

    if (ans >= INF) cout << -1;
    else cout << ans;

    return 0;
}
