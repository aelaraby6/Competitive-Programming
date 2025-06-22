#include <bits/stdc++.h>

#define via(vec, n) { for(int i = 0; i < n; i++) cin >> vec[i]; }
#define vout(vec, n) { for(int i = 0; i < n; i++) cout<<vec[i] << " "; }
#define ll long long
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);

using namespace std;


const double PI = acos(-1.0);


int main() {
    Glitch;

    vector<string>vec = {"Carrots","Kiwis","Grapes"};

    int n,m,k,t; cin>>n>>m>>k>>t;

    vector<pair<int,int>>w(k);

    for(int i = 0; i < k; i++) cin >> w[i].first >> w[i].second;


    sort(w.begin(),w.end());


    while(t--) {
        int a,b; cin>>a>>b;

        if(binary_search(w.begin(),w.end(),make_pair(a,b))) {
            cout<<"Waste\n";
        }
        else {

            int index = (a - 1) * m + (b - 1);

            int waste_before = lower_bound(w.begin(), w.end(), make_pair(a,b)) - w.begin();

            int type = (index - waste_before) % 3;

            cout << vec[type] << '\n';
            }

        }



    return 0;
}
