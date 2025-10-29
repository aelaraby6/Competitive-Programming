#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Fast ios::sync_with_stdio(false); cin.tie(nullptr);

int n,m;
bool solve(int x) {
    if (x < m) return false;
    if (x == m) return true;
    if (x % 3 != 0) return false;

    return solve(x / 3) || solve(x / 3 * 2);

}

int main() {
    Fast;

    int t ; cin>>t;

    while(t--) {
        cin>>n>>m;

        if (m > n) {
            cout<<"No"<<endl;
        }
        else if (n == m) {
            cout<<"Yes"<<endl;
        }
        else {
            if (solve(n)) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }


    }

    return 0;
}