/*In the end, we only regret the chances we didn’t take.*/

#include <bits/stdc++.h>
#define ll long long
#define via(vec, n) { for(int i = 0; i < n; i++) cin >> vec[i]; }

using namespace std;


const ll MOD = 1000000007;

ll FastPow(ll a ,ll b) {
    if(!b) return 1;
    a%=MOD;
   ll res = FastPow(a,b/2) % MOD;
    if(b & 1) return (((res * res) % MOD) * a) % MOD;
    else return (res * res) % MOD;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

   ll a,b; cin>>a>>b;
    cout<<FastPow(a,b) <<endl;

    return 0;
}