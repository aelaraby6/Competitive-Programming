// https://atcoder.jp/contests/abc061/tasks/abc061_b?lang=en

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Fast ios::sync_with_stdio(false); cin.tie(nullptr);

int n , m;
vector<vector<int>> vec;

void Abdo() {
   cin >> n >> m;
   vec.resize(n+1 , {});

    for (int i = 0; i < m; i++) {
        int a,b; cin >> a >> b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }
    for (int i = 1; i <= n; i++) {
        cout << vec[i].size() << endl;
    }
}

int main() {
    Fast;

    Abdo();

    return 0;
}
