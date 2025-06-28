#include <bits/stdc++.h>

#define via(vec, n) { for(int i = 0; i < n; i++) cin >> vec[i]; }
#define vout(vec, n) { for(int i = 0; i < n; i++) cout<<vec[i] << " "; }
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);

using namespace std;


const double PI = acos(-1.0);



int main() {
    Glitch;

    int  n ; cin>>n;

    vector<int>vec(n);
    via(vec,n);

    sort(vec.begin(),vec.end());

    for(int i = 0 ;i< n-2;i++) {
        if(vec[i] + vec[i+1] > vec[i+2]) {
            cout<<"YES\n";
            return 0;
        }
    }


   cout<<"NO\n";
    return 0;
}