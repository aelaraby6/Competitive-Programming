// https://codeforces.com/contest/66/problem/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main() {
    int n,maxx=0;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    for(int i=0;i<n;i++) {
        int c=1;
        if(i!=0) {
           for(int x=i-1;x>=0;x--) {
               if(vec[x]<=vec[i] &&vec[x] <=vec[x+1]) {c++;}
               else break;
           }
        }
        if(i!=n-1) {
            for(int x=i+1;x<n;x++) {
                if(vec[x]<=vec[i] &&vec[x] <= vec[x-1]) {c++;}
                else break;
            }
        }
        maxx=max(maxx,c);
    }
    cout<<maxx<<endl;
}