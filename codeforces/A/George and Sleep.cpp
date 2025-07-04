#include <bits/stdc++.h>
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;


int main() {
    Glitch;

    string a,b; cin>>a>>b;


    int h1 = ((a[0] - '0') * 10) + (a[1] - '0');
    int h2 = ((b[0] - '0') * 10) + (b[1] - '0');

    int m1 = ((a[3] - '0') * 10) + (a[4] - '0');
    int m2 = ((b[3] - '0') * 10) + (b[4] - '0');

    if(h1 == 0) h1 = 24;


    int x= (h1 - h2);
    int y = (m1 - m2);

    if(x == 24) x = 0;

    if(y < 0) {
        y+=60;

        if(x == 0) x = 23;
        else x--;
    }


    if(x < 0) x+=24;

    if(x == 24) x = 0;

    if(x < 10) {
        cout<<"0"<<x<<":";
        if(y < 10) {
            cout<<"0"<<y<<endl;
        }
        else {
            cout<<y<<endl;
        }
    }
    else {
        cout<<x<<":";
        if(y < 10) {
            cout<<"0"<<y<<endl;
        }
        else {
            cout<<y<<endl;
        }
    }

    return 0;
}
