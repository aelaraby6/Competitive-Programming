#include <bits/stdc++.h>
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;



int main() {
    Glitch;

   int p,q,l,r; cin>>p>>q>>l>>r;

    vector<pair<int,int>>z(p),x(q);

    for(int i = 0 ;i<p;i++) cin>>z[i].first >>z[i].second;
    for(int i = 0 ;i<q;i++) cin>>x[i].first >>x[i].second;

    int c = 0;
    for(int i = l ; i<=r ; i++) {
        for(int j = 0 ;j<q;j++) {
            x[j].first+=i;
            x[j].second+=i;
        }


        for(int a = 0 ;a<p;a++) {
            bool  f = 0;
            for(int b= 0 ;b<q;b++) {
               if(max(z[a].first, x[b].first) <= min(z[a].second, x[b].second)) {
                   c++;
                   f = 1;
                   break;
               }
            }
            if(f) break;
        }


        for(int v = 0 ;v<q;v++) {
            x[v].first-=i;
            x[v].second-=i;
        }
    }

    cout<<c<<endl;

    return 0;
}