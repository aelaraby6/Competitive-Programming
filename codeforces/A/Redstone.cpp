#include <bits/stdc++.h>
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;



int main() {
    Glitch;

   int t; cin>>t;

    while(t--) {
        int n; cin>>n;
        vector<int> a(n);

        map<int,int> mp;

        for(int i=0;i<n;i++) {
            cin>>a[i];
            mp[a[i]]++;
        }

        bool f = 0;

        for(int i=0;i<n;i++) {
            if (mp[a[i]] > 1) {
                cout<<"YES"<<endl;
                f = 1;
                break;
            }
        }

        if (!f) cout<<"NO"<<endl;


    }


    return 0;
}