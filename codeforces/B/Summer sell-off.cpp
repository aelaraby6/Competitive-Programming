#include <bits/stdc++.h>

#define via(vec, n) { for(int i = 0; i < n; i++) cin >> vec[i]; }
#define vout(vec, n) { for(int i = 0; i < n; i++) cout<<vec[i] << " "; }
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);

using namespace std;


const double PI = acos(-1.0);


int main() {
    Glitch;


    int n,f;cin>>n>>f;

    vector<pair<ll,ll>>vec(n);

    for(int i = 0; i < n; i++) cin >> vec[i].first >> vec[i].second;

    vector<ll>v(n);
    for(int i = 0 ;i<n;i++) {
        ll a = min(2 * vec[i].first, vec[i].second);
        ll b = min(vec[i].first, vec[i].second);
        v.push_back(a - b);
    }


    sort(v.begin(), v.end(), greater<ll>());
    ll summ= 0;
    for(int i = 0 ;i<n;i++) {
        summ+=(min(vec[i].second , vec[i].first));
    }

    for(int i = 0 ;i<f;i++) {
        summ+=v[i];
    }

    cout<<summ<<endl;

    return 0;
}
