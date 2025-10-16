/*In the end, we only regret the chances we didn’t take.*/

// https://codeforces.com/group/c3FDl9EUi9/contest/264941/problem/B


#include <bits/stdc++.h>


#define via(vec, n) { for(int i = 0; i < n; i++) cin >> vec[i]; }
#define vout(vec, n) { for(int i = 0; i < n; i++) cout<<vec[i] << " "; }
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);

using namespace std;


bool test(vector<int>&vec,ll x,int y) {
    int c = 1,last = vec[0];

    for(int i = 1 ;i < vec.size();i++) {
        if(vec[i] - last >= x) {
            c++;
            last = vec[i];
            if(c == y) return 1;
        }
    }
    return 0;
}
int main() {
    Glitch;
    int n,c; cin>>n>>c;
    vector<int>vec(n);
    for(int i = 0 ; i < n ;i++) cin>>vec[i];

    sort(vec.begin(),vec.end());

    ll l = 0, r = 1e9 , mid , ans = 0;

    while(l <= r) {
        mid = l + (r - l) / 2;

        if(test(vec,mid,c)) {
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
