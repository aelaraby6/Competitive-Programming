#include <bits/stdc++.h>
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);
#define via(vec, n) for(int i = 0; i < n; i++) cin >> vec[i];
using namespace std;




int main() {
    Glitch;
    map<int,pair<int,pair<int,int>>>mp;

    int n; cin>>n;

    set<int>st;

    for (int i =  0 ; i <n ; i++) {
        int a; cin>>a;
        st.insert(a);

        if(mp[a].second.first == 0) {
            mp[a].first = i ;
        }

        else if(mp[a].second.first == 1){
            mp[a].second.second = (i - mp[a].first);
            mp[a].first = i ;
        }

        else {
            if(i - mp[a].first !=  mp[a].second.second) {
                mp[a].second.second = -1;
            }
            else {
                mp[a].first = i ;
            }
        }

        mp[a].second.first = ++mp[a].second.first;

    }

    int count =  0;

    vector<pair<int,int>>vec;

    for(auto x : st) {
        if(mp[x].second.second != -1) {
            count++;
            vec.push_back({x,mp[x].second.second});
        }
    }

    sort(vec.begin(),vec.end());

    cout<<count<<endl;

    for(auto x : vec) {
        cout<<x.first << " "<<x.second<<endl;
    }

    return 0;
}