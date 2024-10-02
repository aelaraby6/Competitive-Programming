// https://codeforces.com/contest/680/problem/B

#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
 
int main() {
    int a,n;
    cin>>n>>a;
    vector<int>vec(n);
    map<int,int>count;
    for(int i=0;i<n;i++) {
        cin>>vec[i];
        count[vec[i]]++;
    }
    a--;
    int end = (n-1) - a;
    int d= min(a,end);
    for(int i =1;i<=d;i++) {
        if(vec[a-i] + vec[a+i] ==1) count[1]--;
    }
    cout<<count[1]<<endl;
 
 
}