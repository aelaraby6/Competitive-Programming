// https://vjudge.net/problem/Gym-324997A

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Fast ios::sync_with_stdio(false); cin.tie(nullptr);

const ll BIG = 4e18;

int c = 0;
int series(int n) {
    c++;
    if (n==1)return 1;


    if (n%2==0)return series(n/2);
     return series(3 * n +1);

}


int main() {
    Fast;

    int n;
    cin>>n;
    series(n);
    cout<<c<<endl;


    return 0;
}
