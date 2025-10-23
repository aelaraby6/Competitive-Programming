#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Fast ios::sync_with_stdio(false); cin.tie(nullptr);

int n;
ll x;
vector<vector<ll>> bags;
ll ans = 0;


bool canReachTarget(ll curr) {
    if (curr > x) return false;

    if (x % curr != 0) return false;

    return true;
}

void countWays(int i, ll curr) {
    if (i == n) {
        if (curr == x) ans++;
        return;
    }

    if (!canReachTarget(curr)) {
        return;
    }

    for (int j = 0; j < bags[i].size(); j++) {
        ll ball_value = bags[i][j];

        if (curr > x / ball_value) {
            continue;
        }

        ll new_product = curr * ball_value;

        if (x % new_product == 0) {
            countWays(i + 1, new_product);
        }
    }
}

int main() {
    Fast;
    cin >> n >> x;

    bags.resize(n);

    for (int i = 0; i < n; i++) {
        int L;
        cin >> L;
        bags[i].resize(L);
        for (int j = 0; j < L; j++) {
            cin >> bags[i][j];
        }
    }

    countWays(0, 1);

    cout << ans << endl;

    return 0;
}
