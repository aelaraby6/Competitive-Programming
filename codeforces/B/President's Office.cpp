// https://codeforces.com/contest/6/problem/B

#include <bits/stdc++.h>

using namespace std;
int n,m;

int main () {
  cin>>n>>m;
  char pre; cin>>pre;
  char arr[n][m];
  for(int i=0;i<n;i++) {
    for(int x=0;x<m;x++) {
      cin>>arr[i][x];
    }
  }
  int maxx=0;
  set<char>st;
  for(int i=0;i<n;i++) {
    for(int x=0;x<m;x++) {
      if(arr[i][x]==pre) {
        if(x+1<m&&arr[i][x+1]!= '.'&&arr[i][x+1]!= pre) st.insert(arr[i][x+1]);
        if(x-1>-1&&arr[i][x-1]!='.'&&arr[i][x-1]!=pre) st.insert(arr[i][x-1]);
        if(i+1<n&&arr[i+1][x]!='.'&&arr[i+1][x]!=pre) st.insert(arr[i+1][x]);
        if(i-1>-1&&arr[i-1][x]!='.'&&arr[i-1][x]!=pre) st.insert(arr[i-1][x]);
      }
    }
  }
  cout<<st.size()<<endl;



}