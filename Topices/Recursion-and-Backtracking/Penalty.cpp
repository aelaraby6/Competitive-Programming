#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Fast ios::sync_with_stdio(false); cin.tie(nullptr);

int t;
string s;


int solve(int i , int w1 , int r1 , int w2 , int r2) {
    if (w1 + r1 < w2 || w2 + r2 < w1 || i == 10) return i;


    bool f = !(i%2 == 0);

    if (s[i] == '1') {
        if (f) return solve(i + 1, w1 + 1, r1 - 1, w2, r2);
        return solve(i + 1, w1, r1, w2 + 1, r2 - 1);
    }
    else if (s[i] == '0') {
        if (f) return solve(i + 1, w1 , r1 - 1, w2, r2);
        return solve(i + 1, w1, r1, w2, r2 - 1);
    }
    else {
        if (f) return min(solve(i + 1, w1 + 1, r1 - 1, w2, r2),solve(i + 1, w1 , r1 - 1, w2, r2));
        return min(solve(i + 1, w1, r1, w2 + 1, r2 - 1),solve(i + 1, w1, r1, w2, r2 - 1));
    }


}


int main() {
    Fast;
  cin>>t;
while(t--) {
cin>>s;
    cout<<solve(0,0,5,0,5)<<endl;
}



}