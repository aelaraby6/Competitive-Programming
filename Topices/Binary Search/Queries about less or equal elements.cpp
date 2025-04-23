/*In the end, we only regret the chances we didn’t take.*/


// https://codeforces.com/contest/600/problem/B

#include <bits/stdc++.h>


#define via(vec, n) { for(int i = 0; i < n; i++) cin >> vec[i]; }
#define vout(vec, n) { for(int i = 0; i < n; i++) cout<<vec[i] << " "; }
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);

using namespace std;



int main() {
    Glitch;
    int a,b; cin>>a>>b;
    vector<int>vec1(a),vec2(b);

    via(vec1,a);
    via(vec2,b);

    sort(vec1.begin(),vec1.end());

    for(int  i = 0;i < b ;i++) {
        auto x = upper_bound(vec1.begin(),vec1.end(),vec2[i]);
        cout<<x-vec1.begin()<<" ";
    }

    return 0;
}