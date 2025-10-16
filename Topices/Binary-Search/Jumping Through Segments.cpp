/*In the end, we only regret the chances we didn’t take.*/

// https://codeforces.com/problemset/problem/1907/D

#include <bits/stdc++.h>


#define via(vec, n) { for(int i = 0; i < n; i++) cin >> vec[i]; }
#define vout(vec, n) { for(int i = 0; i < n; i++) cout<<vec[i] << " "; }
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);

using namespace std;
bool can(vector<pair<ll,ll>>& vec, ll k) {
    ll l = 0, r = 0;
    for (auto seg : vec) {
        l = max(seg.first, l - k);
        r = min(seg.second, r + k);
        if (l > r) return false;
    }
    return true;
}


int main() {
    Glitch;

    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<pair<ll,ll>>vec(n);
        for(int i = 0; i < n; i++) cin >> vec[i].first >> vec[i].second;


        int l = 0, r = 1e9 ,mid,ans = 0;

        while(l <= r) {
            mid = l + (r - l) / 2;
            if(can(vec,mid)) {
                ans = mid;
                r = mid - 1;
            }
            else {
                l = mid + 1;

            }
        }

        cout<<ans<<endl;


    }
    return 0;
}
