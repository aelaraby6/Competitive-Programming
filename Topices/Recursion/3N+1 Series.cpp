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
    /* freopen ("tttt.in","r",stdin);
     freopen ("tttt.out","w",stdout);*/
    int n;
    cin>>n;
    calc(n);
    cout<<ans<<endl;
    return 0;
}
 