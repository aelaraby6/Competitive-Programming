
/*In the end, we only regret the chances we didn’t take.*/

#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while (t--) {
        int n,k,summ=0;cin>>n>>k;
        vector<int>vec(n);
        for(int i=0;i<n;i++) cin>>vec[i];
        sort(vec.begin(),vec.end(),greater<int>());
        for(int i=0;i<n;i++) {
            if(summ+vec[i]<=k) {
                summ+=vec[i];
            }
            else {
                break;
            }
        }
       cout<<k-summ<<endl;
    }
    return 0;
}
