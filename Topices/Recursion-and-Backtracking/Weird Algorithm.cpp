// https://vjudge.net/problem/CSES-1068

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Fast ios::sync_with_stdio(false); cin.tie(nullptr);

void series(ll n) {
    cout << n;
    if (n == 1) return;

    cout << " ";
    if (n % 2 == 0)
        series(n / 2);
    else
        series(3 * n + 1);
}

int main() {
    Fast;
    ll n;
    cin >> n;
    series(n);
    cout << "\n";
    return 0;
}
