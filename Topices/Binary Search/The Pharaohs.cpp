/*In the end, we only regret the chances we didn’t take.*/

// https://codeforces.com/group/3nQaj5GMG5/contest/376466/problem/B

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
        ll n; cin>>n;

         ll l = 1, r = 2 * 1e9 , mid;

        while(l <= r) {
            ll mid =  (l + r) / 2;

            ll b = (mid * (mid + 1)) / 2;
            ll a = b - mid + 1;
            if(n >= a && n <= b) {
                cout<<mid<<endl;
                break;
            }
             if(n > b) {
                l = mid +1;
            }
            else {
                r = mid - 1;
            }
        }

    }

    return 0;
}