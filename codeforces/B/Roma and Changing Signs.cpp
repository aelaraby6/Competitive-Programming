#include <bits/stdc++.h>
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);
#define via(vec, n) for(int i = 0; i < n; i++) cin >> vec[i];
using namespace std;


int main() {
    Glitch;

   int n,k,summ = 0; cin>>n>>k;

    vector<int>vec(n);
    via(vec,n);


    for(int i = 0; i < n && k; i++) {
        if(vec[i] < 0 ) {
            vec[i]*=-1;
            k--;
        }
        else break;

    }

    sort(vec.begin(),vec.end());

    if(k & 1) vec[0]*=-1;



    for(int i = 0; i < n ; i++) {
       summ+=vec[i];
    }

    cout<<summ<<endl;


    return 0;
}
