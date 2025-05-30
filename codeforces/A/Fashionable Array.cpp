#include <bits/stdc++.h>

#define via(vec, n) { for(int i = 0; i < n; i++) cin >> vec[i]; }
#define vout(vec, n) { for(int i = 0; i < n; i++) cout<<vec[i] << " "; }
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main() {
    Glitch;

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> vec(n);
        via(vec, n);

        sort(vec.begin(), vec.end());

        if ((vec[0] + vec[n - 1]) % 2 == 0) {
            cout << 0 << endl;
            continue;
        }

        int count1 = 0, count2 = 0;

        for (int i = n - 1; i > 0; i--) {
            if ((vec[i] + vec[0]) % 2 != 0) count1++;
            else break;
        }


        for (int i = 0; i < n - 1; i++) {
            if ((vec[i] + vec[n - 1]) % 2 != 0) count2++;
            else break;
        }

        cout << min(count1, count2) << endl;
    }

    return 0;
}
