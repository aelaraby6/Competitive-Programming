#include <bits/stdc++.h>
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

const ll MOD = 1e9 + 7;

ll fast_power(ll base , ll n , ll mod) {
    ll res = 1 ;
    base %= mod;
    while(n) {
        if(n & 1) {
            res = (res * base) % mod;
            n--;
        }
        else {
            base = (base * base) % mod;
            n /= 2;
        }
    }
    return res;
}


int main() {
    Glitch;

    int t; cin>>t;
    while(t--) {
        ll a,b; cin>>a>>b;
        cout<<fast_power(a,b,MOD)<<endl;
    }
    return 0;
}
