#include <bits/stdc++.h>
 
 
using namespace std;
int main () {
   
    int n; cin>>n;
    map<string,int>mp;
   for(int i=0;i<n;i++) {
       string s; cin>>s;
       auto it =mp.find(s);
       if(it==mp.end()) {
           cout<<"OK\n";
           mp[s]=1;
       }
       else {
           cout<<s<<mp[s]<<endl;
           mp[s]++;
       }
   }
    return 0;
 
}