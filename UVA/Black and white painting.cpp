#include <bits/stdc++.h>

#define via(vec, n) { for(int i = 0; i < n; i++) cin >> vec[i]; }
#define vout(vec, n) { for(int i = 0; i < n; i++) cout<<vec[i] << " "; }
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);

using namespace std;


const double PI = acos(-1.0);



int main() {
    Glitch;

    int n ,m,c;
    while(cin>>n>>m>>c && n!=0) {
        int x = (c == 1) ? 1 : 0;

        cout<<(((n - 7) * (m - 7))+x) / 2<<endl;
    }
    return 0;
}
