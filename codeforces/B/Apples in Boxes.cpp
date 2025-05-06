/*In the end, we only regret the chances we didn’t take.*/

// https://codeforces.com/contest/2107/problem/B
#include <bits/stdc++.h>


#define via(vec, n) { for(int i = 0; i < n; i++) cin >> vec[i]; }
#define vout(vec, n) { for(int i = 0; i < n; i++) cout<<vec[i] << " "; }
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);

using namespace std;


int main() {
    Glitch;

    int t; cin>>t;
    while(t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> vec(n);
        via(vec, n);

        ll maxx = LLONG_MIN, minn = LLONG_MAX, summ = 0;

        for (int i = 0; i < n; i++) {
            maxx = max(maxx, vec[i]);
            minn = min(minn, vec[i]);
            summ += vec[i];
        }

        int c = 0;
        for (int i = 0; i < n; i++) {
            if (vec[i] == maxx) c++;
        }

        if (maxx - minn > k+1|| (maxx - minn == k+1 && c > 1)) {
            cout << "Jerry" << endl;
        } else {
            if (summ % 2 == 1) {
                cout << "Tom" << endl;
            } else {
                cout << "Jerry" << endl;
            }
        }



    }

    return 0;
}