// https://codeforces.com/contest/1204/problem/A
 #include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main() {
  string s;
  cin>>s;
  int count =0, bit=-1;
  for(int i=0;i<s.size();i++) {
      if(s[i]=='1') {
          count++;
          if(bit ==-1) bit =i;
      }
  }
    bit = s.size() - bit - 1;
    if(count==0) {
        cout<<0<<endl;
        return 0;
    }
    if(bit %2 ==1) {
        count =0;
        bit++;
    }
    bit/=2;
    if(count>1) bit++;
    cout<<bit<<endl;
}