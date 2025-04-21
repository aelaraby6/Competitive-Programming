/*In the end, we only regret the chances we didn’t take.*/

// https://codeforces.com/contest/2103/problem/A

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
        vector<int>vec(n);
        set<int>st;

        for(int i = 0; i < n; i++) {
            cin >> vec[i];
            st.insert(vec[i]);
        }
        if(st.size() == n) cout<<n<<endl;
        else cout<< st.size()<<endl;
    }

    return 0;
}