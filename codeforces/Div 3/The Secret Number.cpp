#include <bits/stdc++.h>
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;



int main() {
    Glitch;

    int t; cin>>t;

    while(t--) {
        ll n;
        cin >> n;

        vector<ll> ans;

        for (int k = 1; k <= 18; k++) {
           ll d = 1 + (ll)pow(10, k);
            if (n % d == 0) {
                ll x = n / d;
                ans.push_back(x);
            }
        }

        if (ans.empty()) {
            cout << 0 << "\n";
        } else {
            sort(ans.begin(), ans.end());
            cout << ans.size() << "\n";
            for (auto x : ans) cout << x << " ";
            cout << "\n";
        }
    }

    


    return 0;
}