#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;

        int d = n - m;

        while (d > 0) {
            if (abs(l) > abs(r)) l++;
            else r--;
            d--;
        }       

        cout << l << " " << r << "\n";
    }

    return 0;
}
