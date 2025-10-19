// https://vjudge.net/problem/Gym-324997M

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Fast ios::sync_with_stdio(false); cin.tie(nullptr);

int n,m;
vector<vector<int>> vec;

const ll NEG_INF = -1e15;

ll maxPath (int i,int j) {

    if (i >= n || j >= m)
        return NEG_INF;

    if (i == n - 1 && j == m - 1)
        return vec[i][j];

    ll right = maxPath(i, j + 1);
    ll down = maxPath(i + 1, j);

    return vec[i][j] + max(right, down);

}


int main() {
    Fast;

  cin >> n >> m;
    vec.resize(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> vec[i][j];
        }
    }

    cout << maxPath(0, 0);




    return 0;
}
