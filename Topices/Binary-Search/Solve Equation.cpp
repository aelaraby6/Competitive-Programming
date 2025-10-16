/*In the end, we only regret the chances we didn’t take.*/

// https://codeforces.com/group/c3FDl9EUi9/contest/264941/problem/C

#include <bits/stdc++.h>


#define via(vec, n) { for(int i = 0; i < n; i++) cin >> vec[i]; }
#define vout(vec, n) { for(int i = 0; i < n; i++) cout<<vec[i] << " "; }
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);

using namespace std;


int main() {
    Glitch;
    int c;
    ll t;
    cin >> c >> t;

    double l = 0.0, r = 2e9;
    double mid;

    while(abs(r - l) > 1e-7){
        mid = (l + r) / 2.0;
        double result = c * mid * log2(mid);

        if (result <= t)
            l = mid;
        else
            r = mid;
    }

    cout << fixed << setprecision(6) << l << "\n";


    return 0;
}
