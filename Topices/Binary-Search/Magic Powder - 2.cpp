/*In the end, we only regret the chances we didn’t take.*/

// https://codeforces.com/contest/670/problem/D2

#include <bits/stdc++.h>


#define via(vec, n) { for(int i = 0; i < n; i++) cin >> vec[i]; }
#define vout(vec, n) { for(int i = 0; i < n; i++) cout<<vec[i] << " "; }
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);

using namespace std;




bool check(ll n,vector<ll>& vec1,vector<ll>& vec2,ll x, ll y) {
    for(int i = 0; i < n; i++) {
        if((vec1[i] * x ) > vec2[i]) y-=((vec1[i] * x ) - vec2[i]);
        if(y < 0) return false;
    }
    return true;
}

int main() {
    Glitch;
    ll n,k;
    cin>>n>>k;
    vector<ll>vec1(n),vec2(n);

    via(vec1,n);
    via(vec2,n);

    ll l = 1, r = 2 * 1e9;

    ll ans =0;

   while(l <= r) {
        ll mid = (l + r) / 2;
        if(check(n,vec1,vec2,mid,k)) {
            ans = mid;
            l = mid +1;
        }
        else {
            r = mid - 1;
        }
    }

    cout<<ans<<endl;


    return 0;
}