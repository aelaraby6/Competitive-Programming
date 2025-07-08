#include <bits/stdc++.h>
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;



int main() {
    Glitch;

    int n, m, k, a, b;

    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++) cin >> x[i];

    cin >> m;
    vector<int> y(m);
    for (int i = 0; i < m; i++) cin >> y[i];

    cin >> k;
    vector<int> z(k);
    for (int i = 0; i < k; i++)cin >> z[i];

    cin >> a >> b;


    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    sort(z.begin(),z.end());

    int r1 = x[n-1];
    int p1 = y[m-1];
    int p2 = z[0];

    double res = sqrt(((double)b * r1 * r1 * p1 ) / ((double)(b * p1) + (a * p2)));

    cout << fixed << setprecision(12) << res << endl;


    
    return 0;
}
