#include <bits/stdc++.h>
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

bool can(pair<int,int>pr,int n ,int m,int z , ll x,ll y) {
    ll new_x = (1LL * pr.first * z) + x;
    ll new_y = (1LL * pr.second * z) + y;
    return (0 < new_x && new_x <= n && 0 < new_y && new_y <= m);
}

int main() {
    Glitch;

   int n , m; cin>>n>>m;
    ll x,y; cin>>x>>y;

    int k; cin>>k;

    vector<pair<int,int>>vec(k);

    for(int  i = 0 ; i<k ; i ++) {
        cin>>vec[i].first >>vec[i].second;
    }

       ll c = 0;


        for(int  i = 0 ;i < k;i++) {
            int l = 0 , r = 1e9 , mid , ans = 0;

            while(l <= r) {
                mid = l + (r - l) / 2;
                if(can({vec[i].first,vec[i].second},n,m,mid,x,y)) {
                    ans  = mid;
                    l = mid + 1;
                }

                else {
                    r = mid - 1;
                }
            }

            c+=ans;
            x+=( 1LL * ans * vec[i].first);
            y+=(1ll * ans * vec[i].second);

        }



    cout<<c<<endl;


    return 0;
}
