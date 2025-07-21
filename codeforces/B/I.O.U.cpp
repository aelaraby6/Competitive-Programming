#include <bits/stdc++.h>
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);
#define via(vec, n) for(int i = 0; i < n; i++) cin >> vec[i];
using namespace std;


int main() {
    Glitch;

    int n , m , summ = 0 ; cin>>n>>m;

    map<int,int>mp;

    for(int i = 0 ;i < m ;i++) {
        int a , b, c;
        cin>>a>>b>>c;
        mp[a]+=(-1 * c);
        mp[b] +=(c);
    }

    for(auto x : mp) {
        x.second  > 0 ? summ+=x.second:summ+=0 ;
    }

    cout<<summ<<endl;



    return 0;
}
