/*In the end, we only regret the chances we didn’t take.*/

// https://codeforces.com/contest/2104/problem/A

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
        int a,b,c;
        cin>>a>>b>>c;
        int sum = a + b + c;
        if (sum % 3 != 0) {
            cout << "NO\n";
            continue;
        }

        int x = sum / 3;
        if (x >= a && x >= b && x <= c) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }

    }

    return 0;
}