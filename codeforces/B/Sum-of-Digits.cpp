//https://codeforces.com/contest/102/problem/B

#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
 
int main() {
 string s; cin>>s;
 if(s.size()<2) {
  cout<<0<<endl;
  return 0;
 }
 ll summ=0,c=0;
 while(s.size()>1) {
  for(int i=0;i<s.size();i++) {
     summ+=s[i]-'0';
  }
  c++;
  s = to_string(summ);
  summ=0;
 }
 cout<<c<<endl;
}