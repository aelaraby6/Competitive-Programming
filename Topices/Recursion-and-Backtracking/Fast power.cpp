#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Fast ios::sync_with_stdio(false); cin.tie(nullptr);

const ll MOD = 1000000007;

ll fast(ll x ,ll n) {
    if (n == 0) return 1;
    if (n == 1) return x % MOD;

    ll res = fast(x, n / 2);
    res = (res * res) % MOD;

    if (n % 2 == 1) {
        res = (res * (x % MOD)) % MOD;
    }

    return res;

}

int main() {
    Fast;

    ll x,n;
    cin>>x>>n;

    cout<<fast(x,n)<<endl;


    return 0;
}
