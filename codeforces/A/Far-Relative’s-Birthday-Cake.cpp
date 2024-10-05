//https://codeforces.com/contest/629/problem/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int n,value=0; cin>>n;
   vector<string> vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    for(int i=0;i<n;i++)
    {
        int calc=0;
        for(int j=0;j<n;j++)
        {
            if(vec[i][j]=='C') calc++;
        }
        value+=(calc*(calc-1)/2);
    }
    for(int i=0;i<n;i++)
    {
        int calc=0;
        for(int j=0;j<n;j++)
        {
            if(vec[j][i]=='C') calc++;
        }
        value+=(calc*(calc-1)/2);
    }
    cout<<value<<endl;
 
    return 0;
}