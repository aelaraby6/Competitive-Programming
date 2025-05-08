/*In the end, we only regret the chances we didn’t take.*/


#include <bits/stdc++.h>


#define via(vec, n) { for(int i = 0; i < n; i++) cin >> vec[i]; }
#define vout(vec, n) { for(int i = 0; i < n; i++) cout<<vec[i] << " "; }
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);

using namespace std;

pair<bool, ll> can(vector<int> &vec, ll m , ll s) {
    vector<ll> cost;
    for(int i = 0; i < vec.size(); i++) {
        cost.push_back(vec[i] + (i + 1) * m);
    }
    sort(cost.begin(), cost.end());

    ll summ = 0;
    for(int i = 0; i < m; i++) {
        summ += cost[i];
    }

    return {summ <= s, summ};
}


int main() {
    Glitch;

    int n;
    ll s;
    cin >> n >> s;
    vector<int> vec(n);
    via(vec, n);

    ll l = 0, r = n, mid, ans = 0, cost = 0;

    while(l <= r) {
        mid = l + (r - l) / 2;

        auto [cann, total_cost] = can(vec, mid, s);

        if(cann) {
            ans = mid;
            cost = total_cost;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    cout << ans << " " << cost << endl;

    return 0;
}
