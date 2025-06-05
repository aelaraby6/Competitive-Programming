#include <bits/stdc++.h>

#define via(vec, n) { for(int i = 0; i < n; i++) cin >> vec[i]; }
#define vout(vec, n) { for(int i = 0; i < n; i++) cout<<vec[i] << " "; }
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);

using namespace std;


int main() {
    Glitch;


    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        double x = (360 / ((-1.0 * 180) + n));
        int y  = (360 / ((-1 * 180)+ n));

        if(x== y) cout<<"YES\n";
        else cout<<"NO\n";

    }


    return 0;
}
