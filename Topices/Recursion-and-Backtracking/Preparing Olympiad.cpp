// https://codeforces.com/problemset/problem/550/B

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Fast ios::sync_with_stdio(false); cin.tie(nullptr);

int n,l,r,x;
vector<int> vec;


int solve(int i , int cnt , int summ , int mn , int mx) {
    if (i==n) {
        return (cnt>=2 && summ>=l && summ<=r && mx-mn >=x);
    }
    return solve(i+1,cnt,summ,mn,mx) +
        solve(i+1,cnt+1,summ+vec[i],min(mn,vec[i]),max(mx,vec[i]));
}


int main() {
    Fast;
   cin >> n >> l >> r>>x;
    vec.resize(n);
    for (int i = 0; i < n; i++) cin >> vec[i];

    cout<<solve(0,0,0,INT_MAX,0);

}
