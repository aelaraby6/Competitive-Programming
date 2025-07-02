#include <bits/stdc++.h>
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

string multiply(string a, string b) {
    if (a == "0" || b == "0") return "0";

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    vector<ll> res(a.size() + b.size(), 0);
    for (int i = 0; i < b.size(); i++) {
        for (int j = 0; j < a.size(); j++) {
            res[i + j] += (b[i] - '0') * (a[j] - '0');
        }
    }

    for (int i = 0; i < res.size(); i++) {
        if (res[i] >= 10) {
            res[i + 1] += res[i] / 10;
            res[i] %= 10;
        }
    }

    for(int i = res.size() - 1 ; i>=0 && res[i] == 0 ;i --) {
        res.pop_back();
    }


    reverse(res.begin(), res.end());

    string ans;
    for (auto d : res)
        ans += (d + '0');
    return ans;
}

int main() {
    Glitch;

    string a, b;
    while (cin >> a >> b) {
        cout << multiply(a, b) << "\n";
    }

    return 0;
}
