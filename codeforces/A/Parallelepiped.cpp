#include <bits/stdc++.h>

#define via(vec, n) { for(int i = 0; i < n; i++) cin >> vec[i]; }
#define vout(vec, n) { for(int i = 0; i < n; i++) cout<<vec[i] << " "; }
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);

using namespace std;


const double PI = acos(-1.0);


int main() {
    Glitch;


    int a,b,c;cin>>a>>b>>c;

    int l = (a*b) / c;

    int w = (a * c) / b;

    int h = (b * c) / a;

    if(sqrt(l) * sqrt(l) == l) l = sqrt(l);
    if(sqrt(w) * sqrt(w) == w) w = sqrt(w);
    if(sqrt(h) * sqrt(h) == h) h = sqrt(h);


    cout<<(l + w + h) * 4<<endl;

    return 0;
}