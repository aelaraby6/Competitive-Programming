#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Fast ios::sync_with_stdio(false); cin.tie(nullptr);

const ll BIG = 4e18;

int main() {
    Fast;

    int t;
    cin >> t;
    while (t--) {
        int n ,s , summ = 0; cin >> n>>s;

       vector<int> vec(n);
        int cnt0 = 0, cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
            summ += vec[i];
            if (vec[i] == 0) cnt0++;
            else if (vec[i] == 1) cnt1++;
            else cnt2++;
        }

        if (s - summ == 1  || s < summ) {
            for (int i = 0; i < cnt0; i++) cout << 0 << " ";
            for (int i = 0; i < cnt2; i++) cout << 2 << " ";
            for (int i = 0; i < cnt1; i++) cout << 1 << " ";
            cout << endl;
        }

        else {
            cout << -1 << endl;
        }


    }

    return 0;
}