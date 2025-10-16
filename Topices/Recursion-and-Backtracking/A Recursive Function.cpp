// https://atcoder.jp/contests/abc273/tasks/abc273_a

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Fast ios::sync_with_stdio(false); cin.tie(nullptr);

const ll BIG = 4e18;


int fact(int n) {
    if (n==1)return 1;

    return n * fact(n-1);
}


int main() {
    Fast;

    int n;
    cin>>n;
    cout<<fact(n)<<endl;


    return 0;
}
