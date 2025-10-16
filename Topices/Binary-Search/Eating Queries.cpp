/*In the end, we only regret the chances we didn’t take.*/

// https://codeforces.com/contest/1676/problem/E

#include <bits/stdc++.h>


#define via(vec, n) { for(int i = 1; i <= n; i++) cin >> vec[i]; }
#define vout(vec, n) { for(int i = 0; i < n; i++) cout<<vec[i] << " "; }
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);

using namespace std;


int main() {
    Glitch;

   int t; cin>>t;
    while(t--) {
        int n,q;cin>>n>>q;
        vector<ll>vec(n+1);
        via(vec,n);
        sort(vec.begin(),vec.end(),greater<ll>());
        for(int i = 1; i <= n; i++) {
            vec[i]+=vec[i-1];
        }
        while(q--) {
            ll x; cin>>x;
            auto it = lower_bound(vec.begin(),vec.end(),x);
            if(it == vec.end()) cout<<-1<<endl;
            else cout<<it - vec.begin() + 1<<endl;

        }
    }

    return 0;
}