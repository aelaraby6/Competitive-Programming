#include <bits/stdc++.h>

#define via(vec, n) { for(int i = 0; i < n; i++) cin >> vec[i]; }
#define vout(vec, n) { for(int i = 0; i < n; i++) cout<<vec[i] << " "; }
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);

using namespace std;



int main() {
    Glitch;

    int a,b;
    cin>>a>>b;

    if(a == 1 && b == 1) {
        cout<<0<<endl;
        return 0;
    }

        int count = 0;
        while( a && b) {
            if( a < b) {
                a++;
                b-=2;
                if(b < 0) b = 0;
            }
            else {
                b++;
                a-=2;
                if(a < 0) a = 0;
            }

            count++;
        }

    cout<<count<<endl;


    return 0;
}
