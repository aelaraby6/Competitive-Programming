#include <bits/stdc++.h>
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;



int main() {
    Glitch;

    int t; cin>>t;

    while(t--) {
        ll n;
        cin >> n;

        ll ans = 0;

        for (int  i = 19 ; i >= 0; i--) {

            ll cost = (pow(3, i + 1) + (i * (pow(3 , i - 1))));

            ll x = pow(3 , i);

            while (true) {
                if (n >= x) {
                    n-=x;
                    ans+=(cost);
                }
                else {
                    break;
                }
            }
        }

        cout<<ans<<"\n";
    }


    return 0;
}