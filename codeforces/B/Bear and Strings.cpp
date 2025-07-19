#include <bits/stdc++.h>
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);
#define via(vec, n) for(int i = 0; i < n; i++) cin >> vec[i];
using namespace std;


int main() {
    Glitch;

   string s; cin>>s;


    int count  = 0, n = s.size(), x = 0;

    if (n < 4) {
        cout << 0 << endl;
        return 0;
    }
    
    for(int i = 0 ; i < s.size() - 3 ; i++) {
        if(s.substr(i,4) == "bear") {
            count+=(i - x + 1) * (n - (i + 3));
            x = i+1;
        }
    }

    cout<<count<<endl;


    return 0;
}