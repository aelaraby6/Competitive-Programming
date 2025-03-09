#include <bits/stdc++.h>

using namespace std;

int ans=0;
void calc(int n)
{
//base case
ans++;
if(n==1) return;

//transition
return (n%2==0)? calc(n/2):calc(3*n+1);

}


int main()
{
    int n;
    cin>>n;
    calc(n);
    cout<<ans<<endl;
    return 0;
}
 
