#include <bits/stdc++.h>

#define via(vec, n) { for(int i = 0; i < n; i++) cin >> vec[i]; }
#define vout(vec, n) { for(int i = 0; i < n; i++) cout<<vec[i] << " "; }
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);

using namespace std;


const double PI = acos(-1.0);

int main() {
    Glitch;


    double d,h,v,e; cin>>d>>h>>v>>e;

    double area = 1.0 * PI * (d / 2) * (d / 2);


    double x = area * e;

    double y = area * h;

    double sec = v - x;

    if(v < x) {
        cout<<"NO"<<endl;
    }

    else {
        cout<<"YES"<<endl;
        cout << fixed << setprecision(12) << y / sec<< endl;
    }



    return 0;
}
