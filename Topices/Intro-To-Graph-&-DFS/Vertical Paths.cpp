// https://codeforces.com/contest/1675/problem/D

#include <bits/stdc++.h>
using namespace std;

#define Fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

int n, m;
vector<string> grid;
vector<vector<bool>> visited;

vector<vector<int>> vec;
vector<int> vis;


int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

bool isValid(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m &&
           grid[x][y] == '.' && !visited[x][y];
}


vector<vector<int>>cons;
vector<int>c;

void DFS(int u) {
    vis[u] = 1;
    c.push_back(u);
    bool f = 0;
    for(int v : vec[u]) {
        if(!vis[v]) {
            f=1;
            DFS(v);
        }
    }
    if (!f) {
        cons.push_back(c);
        c.clear();
    }
}


void solve() {
    cin >> n ;

    vec.assign(n+1,{});
    vis.assign(n+1,0);

    c.clear();
    cons.clear();


    int r = 0;
    for (int i = 1; i <= n; i++) {
        int x ;  cin>>x;
        if(i == x) r= x;
        else {
            vec[i].push_back(x);
            vec[x].push_back(i);
        }
    }


    DFS(r);

    cout<<cons.size()<<endl;

    for (auto x : cons) {
        cout<<x.size()<<endl;
        for (auto y : x) {
            cout << y << " ";
        }
        cout << endl;
    }


}

int main() {
    Fast;
    int t; cin>>t;
    while(t--) {
        solve();
    }
 
    return 0;
}