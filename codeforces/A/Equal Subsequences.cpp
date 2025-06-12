#include <bits/stdc++.h>

#define via(vec, n) { for(int i = 0; i < n; i++) cin >> vec[i]; }
#define vout(vec, n) { for(int i = 0; i < n; i++) cout<<vec[i] << " "; }
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);

using namespace std;


const double PI = acos(-1.0);

int main() {
    Glitch;

    int t; cin>>t;

    while(t--) {
        int n,k; cin>>n>>k;

        string s = "";

        for(int  i = 0;i<n;i++) {
            if(k) {
                s+='1';
                k--;
            }
            else {
                s+='0';
            }
        }

        cout<<s<<endl;
    }

    return 0;
}