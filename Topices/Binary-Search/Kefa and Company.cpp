/*In the end, we only regret the chances we didn’t take.*/

//https://codeforces.com/problemset/problem/580/B

#include <bits/stdc++.h>


#define via(vec, n) { for(int i = 0; i < n; i++) cin >> vec[i]; }
#define vout(vec, n) { for(int i = 0; i < n; i++) cout<<vec[i] << " "; }
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);

using namespace std;



int main() {
    Glitch;
   ll n,d; cin>>n>>d;
    vector<pair<ll,ll>>vec(n);

    for(int i = 0;i<n;i++) {
        cin>>vec[i].first>>vec[i].second;
    }

    sort(vec.begin(),vec.end());


  int l = 0 ,r = 0;
    ll maxx = 0,summ = 0;

    while(r < n) {
        while(l < r && vec[r].first - vec[l].first >= d) {
            summ-=vec[l].second;
            l++;
        }
        summ+=vec[r].second;
        maxx=max(maxx,summ);
        r++;
    }
    cout<<maxx<<endl;

    return 0;
}