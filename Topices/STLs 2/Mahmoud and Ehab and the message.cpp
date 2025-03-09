#include <bits/stdc++.h>
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long
using namespace std;

int main() {
    Glitch;

    ll n, k, m;
    cin >> n >> k >> m;

    vector<string> vec(n);
    vector<ll> cost(n);

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> cost[i];
    }

    unordered_map<string, ll> mp;

    while (k--) {
        int x;
        cin >> x;
        ll min_cost = LLONG_MAX;
        vector<int> indices(x);

        for (int i = 0; i < x; i++) {
            cin >> indices[i];
            min_cost = min(min_cost, cost[indices[i] - 1]);
        }

        for (int i = 0; i < x; i++) {
            mp[vec[indices[i] - 1]] = min_cost;
        }
    }

    ll Fcost = 0;

    for (int i = 0; i < m; i++) {
        string a;
        cin >> a;
        Fcost += mp[a];
    }

    cout << Fcost << '\n';

    return 0;
}
