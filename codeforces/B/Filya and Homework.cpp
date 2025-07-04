#include <bits/stdc++.h>
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;


int main() {
    Glitch;


    int n; cin>>n;
    vector<int>vec(n);

    for (int  i = 0 ;i <n ;i++) cin>>vec[i];

    set<int>st(vec.begin(),vec.end());

    vector<int> v(st.begin(), st.end());

    if(st.size() == 1) {
        cout<<"YES\n";
    }
    else if(st.size() == 3){
        if(abs(v[0] - v[1]) == abs(v[1] - v[2])) {
            cout<<"YES\n";

        }
        else {
            cout<<"NO\n";

        }

    }
    else if(st.size() == 2){
       if(v[0] + v[0] == v[1] || v[1] - v[0] == v[0]  || (v[0] + v[0] == v[1] && v[1] - v[0] == v[0]) ||
           (v[0] - v[0] + v[1] == v[1] )) {
           cout<<"YES\n";
           return 0;

       }
        cout<<"NO\n";


    }
    else {
        cout<<"NO\n";
    }


    return 0;
}
