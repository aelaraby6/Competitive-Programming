/*In the end, we only regret the chances we didn’t take.*/

// https://codeforces.com/contest/1237/problem/A


#include <bits/stdc++.h>


#define via(vec, n) { for(int i = 0; i < n; i++) cin >> vec[i]; }
#define vout(vec, n) { for(int i = 0; i < n; i++) cout<<vec[i] << " "; }
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);

using namespace std;


int main() {
    Glitch;

  int n; cin>>n;
    vector<int>vec(n);
    via(vec,n);

    bool f = 1;
    for(int i = 0 ;i < n ;i++) {
        if(vec[i] % 2 ==0) {
           vec[i] =  (double)vec[i] / 2;
        }
        else {
            if(f) {

                vec[i] = ceil( (double)vec[i] / 2);
                f = 0;
            }
            else {
                vec[i] = floor((double)vec[i] / 2);
                f = 1;
            }
        }
    }

    for(int i = 0 ;i < n ;i++) {
        cout<<vec[i]<<endl;
    }



    return 0;
}
