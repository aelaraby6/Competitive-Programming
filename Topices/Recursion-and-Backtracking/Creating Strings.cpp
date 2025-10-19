// https://vjudge.net/problem/CSES-1622

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Fast ios::sync_with_stdio(false); cin.tie(nullptr);

string s;
vector<string> vec;

void strings (int i) {
    if (i == s.size()) {
        vec.push_back(s);
        return;
    }

    for (int j = i; j < s.size(); j++) {
        swap(s[j], s[i]);
        strings(i + 1);
        swap(s[j], s[i]);
    }
}


int main() {
    Fast;

    cin >> s;

    sort(s.begin(), s.end());

    strings(0);

    set<string>st(vec.begin(), vec.end());

    cout << st.size() << endl;

    for (auto i : st) {
        cout << i << endl;
    }


    return 0;
}
