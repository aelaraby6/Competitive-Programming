/*In the end, we only regret the chances we didn’t take.*/

// https://codeforces.com/contest/474/problem/B

#include <bits/stdc++.h>


#define via(vec, n) { for(int i = 1; i <= n; i++) cin >> vec[i]; }
#define vout(vec, n) { for(int i = 0; i < n; i++) cout<<vec[i] << " "; }
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);

using namespace std;


int main() {
    Glitch;

   int n; cin>>n;
    vector<ll>vec(n+1);
    vec[0] = 1;
    via(vec,n);
    int q;cin>>q;

    for(int i = 1;i<=n;i++) {
        vec[i]+=vec[i-1];
    }
    while(q--) {
        int x;cin>>x;

        int l = 1,r = n;
        int ans = 0;
        while(l <=r) {
            int mid = l + (r - l) /2;
            if(x > (vec[mid-1] - 1) && x<= (vec[mid] - 1)) {
                cout<<mid<<endl;
                break;

            }
            if(vec[mid] -1  < x) l = mid +1;
            else r = mid -1;
        }
        }


    return 0;
}