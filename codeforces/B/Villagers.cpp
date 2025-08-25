#include <bits/stdc++.h>
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;



int main() {
    Glitch;

   int t; cin>>t;

    while(t--) {
        int n; cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());

        if (n == 2) {
            cout << max(a[0], a[1]) << "\n";
            continue;
        }
        else if (n == 3) {
            cout << min((a[0] + a[2]), (a[1] + a[2])) << "\n";
            continue;
        }

        ll ans1 = 0 , ans2 = 0;

        for (int i = 0; i < n / 2; i++) {
            ans1 += a[n - 1 - i];
        }
        if (n % 2 == 1) ans1 += a[n / 2];

        if (n % 2 == 1) {
            ans2 += a[0];
            for (int i = 1; i < n ; i+=2) {
                ans2 += a[i + 1];
            }

        }
        else {
            for (int i = 0; i < n ; i+=2) {
                ans2 += a[i + 1];
            }
        }
        cout<<min(ans1, ans2)<<"\n";


    }


    return 0;
}