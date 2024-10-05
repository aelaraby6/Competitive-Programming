//https://codeforces.com/contest/16/problem/B

#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main() {
    int n,m; cin>>n>>m;
    vector<pair<int,int>>vec(m);
    for(int i=0;i<m;i++) cin>>vec[i].first>>vec[i].second;
    sort(vec.begin(), vec.end(),[](const pair<int, int>& a,
              const pair<int, int>& b) {
               return a.second < b.second;
           });
    int summ=0;
    for(int i=m-1;i>=0;i--) {
        if(vec[i].first<=n)
        {
            summ+=(vec[i].first*vec[i].second);
            n-=vec[i].first;
        }
        else {
            summ+=n*vec[i].second;
            break;
        }
    }
    cout<<summ<<endl;

}