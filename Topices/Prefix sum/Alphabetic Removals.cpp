#include <bits/stdc++.h>

using namespace std;


int main() {
    int n,k; cin>>n>>k;
    string s; cin>>s;
    for(char i='a';i<='z' && k;i++) {
        for(int j=0;j<s.size() && k;j++)
        {
            if(s[j] ==i)
            {
                s[j] ='#';
                k--;
            }
        }
    }
    for(int j=0;j<s.size() ;j++)
    {
       if(s[j] !='#') cout<<s[j];
    }


    return 0;
}