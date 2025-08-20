#include <bits/stdc++.h>
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;



int main() {
    Glitch;

    int n , x0, y0; cin >> n >> x0 >> y0;

    set<pair<int,int>> s;

    for (int i = 0; i < n; i++) {
        int x, y; cin>>x>>y;

        int sign = 0;
        int dx = x - x0;
        int dy = y - y0;


        if (dx <0 && dy > 0) sign = 1;
        if (dy < 0 && dx > 0) sign = 1;

        if (dx == 0) dy = 1;
        if (dy == 0) dx = 1;

        dy = abs(dy);
        dx = abs(dx);
        int z = __gcd(dx, dy);
        dx/=z;
        dy/=z;

        if (sign) dx*=-1;

        s.insert(make_pair(dx, dy));


    }

    cout << s.size() << endl;

    return 0;
}