// https://vjudge.net/problem/AtCoder-abc367_c

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Fast ios::sync_with_stdio(false); cin.tie(nullptr);

int n, k;
vector<int> vec;
vector<vector<int>> ans;
vector<int> cur;

void solve(int i) {
    if (i == n) {
        int sum = 0;
        for (int x : cur) sum += x;
        if (sum % k == 0) ans.push_back(cur);
        return;
    }

    for (int j = 1; j <= vec[i]; j++) {
        cur.push_back(j);
        solve(i + 1);
        cur.pop_back();
    }
}


int main() {
    Fast;
    cin >> n >> k;
    vec.resize(n);
    for (int i = 0; i < n; i++) cin >> vec[i];

    solve(0);

    for (auto &v : ans) {
        for (int x : v) cout << x << " ";
        cout << "\n";
    }
}
