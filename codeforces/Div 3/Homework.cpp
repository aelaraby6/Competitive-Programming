#include <bits/stdc++.h>
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;



int main() {
    Glitch;

    int t; cin>>t;

    while(t--) {
        int n; cin>>n;
        string a; cin>>a;
        int m ; cin>>m;
        string b; cin>>b;
        string c; cin>>c;

        for (int  i = 0; i < c.size(); i++) {
            if (c[i] == 'D') {
                a.push_back(b[i]);
            }
            if (c[i] == 'V') {
                a.insert(a.begin(), b[i]);
            }
        }

        cout << a << endl;

    }


    return 0;
}