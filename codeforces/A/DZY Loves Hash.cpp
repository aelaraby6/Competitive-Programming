#include <bits/stdc++.h>
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;


int main() {
    Glitch;

    int p,n; cin>>p>>n;

    int count =  1;

    set<int>st;
    while(n--) {
        int a ;  cin>>a;

        if(st.find(a % p) == st.end()) {

            st.insert(a%p);
            count++;
        }
        else {
            cout<<count<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;

    return 0;
}
