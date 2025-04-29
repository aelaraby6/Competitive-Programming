/*In the end, we only regret the chances we didn’t take.*/


// https://codeforces.com/contest/2104/problem/B

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
        int n; cin>>n;

        vector<int>vec(n+1),maxv(n+1);

        via(vec,n);

        for(int  i =1;i<=n;i++) {
            maxv[i] = max(vec[i],maxv[i-1]);
        }

        ll sum = 0;
        for(int i = n ; i >= 1;i--) {
            sum+=vec[i];

            cout<<(max(sum,sum - vec[i] + maxv[i - 1]))<<" ";
        }

        cout<<endl;

    }

    return 0;
}