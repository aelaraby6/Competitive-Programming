/*In the end, we only regret the chances we didn’t take.*/

// https://codeforces.com/contest/1676/problem/A

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
       string s ;cin>>s;
        int a = 0,b = 0;
        cout << (s[0]+s[1]+s[2] == s[3]+s[4]+s[5] ? "YES" : "NO") << '\n';

    }

    return 0;
}