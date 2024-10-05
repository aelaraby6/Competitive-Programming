// https://codeforces.com/contest/451/problem/B

#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main() {
   int n; cin>>n;
   vector<int>vec(n);
   for(int i=0;i<n;i++) cin>>vec[i];
    int l = -1 , r = -1;
   for(int i=0;i<n-1;i++)
   {
     if(vec[i]<vec[i+1] && l==-1) continue;
       else if(vec[i]>vec[i+1] && l==-1) l=i;
       else if(vec[i]<vec[i+1] && r==-1) r=i;
   }
    if(l==-1)
    {
        cout<<"yes\n"<<1<<" "<<1<<endl;
        return 0;
    }
    if(r==-1) r=n-1;
    reverse(vec.begin()+l,vec.end()-(n-1-r));
    for(int i=0 ;i<n-1;i++) 
    {
        if(vec[i]>vec[i+1])
        {
            cout<<"no"<<endl;
            return 0;
        }
    }

    cout<<"yes\n"<<l+1<<" "<<r+1<<endl;


}