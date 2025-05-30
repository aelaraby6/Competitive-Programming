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
        string s;
        cin >> s;
        int a = stoi(s);
        double x = sqrt(a);
        int b = sqrt(a);

        if (x == b) {
           cout<<0<<" "<<x<<endl;
        } else {
            cout << -1<< endl;
        }
    }

    return 0;
}
