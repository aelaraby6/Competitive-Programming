
// https://vjudge.net/problem/CSES-1623


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Fast ios::sync_with_stdio(false); cin.tie(nullptr);

ll n;
vector<ll> vec(21);
vector<bool> vis(21);

ll apple(int i) {
    if (i == n) {
        ll x = 0, y = 0;
        for (int j = 0; j < n; j++) {
            if (vis[j]) x += vec[j];
            else y += vec[j];
        }
        return abs(x - y);
    }

    vis[i] = true;
    ll a = apple(i + 1);
    vis[i] = false;
    ll b = apple(i + 1);

    return min(a, b);
}



int main() {
    Fast;
    cin >> n;
    for (int i = 0 ; i < n ; i++) cin >> vec[i];
   cout << apple(0) << endl;
    return 0;
}
