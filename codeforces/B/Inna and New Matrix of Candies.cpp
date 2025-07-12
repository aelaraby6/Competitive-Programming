#include <bits/stdc++.h>
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;



int main() {
    Glitch;

   int n,m; cin>>n>>m;

    vector<vector<char>>vec(n,vector<char>(m));

    for(int  i = 0 ;i  <n ; i++ ) {
        for(int  j = 0 ;j<m ; j++) {
            cin>>vec[i][j];
        }
    }


    set<int>res;

    for(int  i = 0 ;i  <n ; i++ ) {
        int a  = 0 , b = 0;
        for(int  j = 0 ;j<m ; j++) {
            if(vec[i][j] == 'G') a = j;
            if(vec[i][j] == 'S') b = j;
        }

        if(b < a) {
            cout<<-1<<endl;
            return 0;
        }

        res.insert(min((b - a),((m - 1) - a)));
    }

    cout<<res.size()<<endl;


    return 0;
}
