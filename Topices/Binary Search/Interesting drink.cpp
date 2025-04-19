/*In the end, we only regret the chances we didn’t take.*/

// https://codeforces.com/contest/706/problem/B


#include <bits/stdc++.h>


#define via(vec, n) { for(int i = 0; i < n; i++) cin >> vec[i]; }
#define vout(vec, n) { for(int i = 0; i < n; i++) cout<<vec[i] << " "; }
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);

using namespace std;



int main() {
    Glitch;
    int n,q; cin>>n;
    vector<int>vec(n);
    for(int i = 0 ; i < n ;i++) cin>>vec[i];

    sort(vec.begin(),vec.end());

    cin >>q;
    while(q--) {
        int x; cin>>x;
        int num = upper_bound(vec.begin(),vec.end(),x) - vec.begin();
        cout << num <<endl;
    }

    return 0;
}
