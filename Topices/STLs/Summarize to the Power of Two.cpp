/* In the end, we only regret the chances we didn’t take. */

#include <bits/stdc++.h>

#define via(vec, n) { for(int i = 0; i < n; i++) cin >> vec[i]; }
#define vout(vec, n) { for(int i = 0; i < n; i++) cout << vec[i] << " "; }
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main() {
    /* freopen("breedflip.in", "r", stdin);
       freopen("breedflip.out", "w", stdout); */

    Glitch;

    int n;
    cin >> n;

    vector<ll> vec(n);
    unordered_map<ll, ll> mp;

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        mp[vec[i]]++;
    }

    int c = 0;
    vector<ll> d(34);

    for (int i = 0; i < 34; i++) {
        d[i] = (ll) 1 << i; // 2 ^ i
    }

    for (int i = 0; i < n; i++) {
        int f = 0;
        for (int j = 0; j < 34; j++) {
            ll num = d[j] - vec[i];
            if (num != vec[i] || mp[num] > 1)
                f += mp[num];
            if (f) break;
        }
        if (!f) {
            c++;
        }
    }

    cout << c << endl;

    return 0;
}
