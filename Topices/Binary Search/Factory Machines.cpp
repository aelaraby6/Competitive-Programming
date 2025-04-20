/*In the end, we only regret the chances we didn’t take.*/

#include <bits/stdc++.h>


#define via(vec, n) { for(int i = 0; i < n; i++) cin >> vec[i]; }
#define vout(vec, n) { for(int i = 0; i < n; i++) cout<<vec[i] << " "; }
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);

using namespace std;

bool check(const vector<int>& vec, ll x, ll t) {

    ll num = 0;

    for (int i = 0; i < vec.size(); i++) {
        num += x / vec[i];
        if(num >= t) return 1;
    }

    return 0;

}

int main() {
    Glitch;
    ll t;
    int n;
    cin >> n>>t;
    vector<int>vec(n);

    for(int  i = 0 ;i < n ;i++) cin>>vec[i];

    sort(vec.begin(),vec.end());

    ll l = 1, r = 1e18, ans = -1;

    while(l<=r) {
        ll mid = l + (r - l) / 2;
        if (check(vec, mid, t)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout<<ans<<endl;

    return 0;
}
