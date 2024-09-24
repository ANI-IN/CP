#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
using namespace std;
int MOD=1e9+7;  


void solve(){
    string s;
    cin>>s;
    int n=s.size();
    int one=0,two=0,three=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        one++;
        else if(s[i]=='2')
        two++;
        else if(s[i]=='3')
        three++;
    }

    string ans="";
    while(one--)
    {
        ans+="1+";
    }

    while(two--)
    {
        ans+="2+";
    }

    while(three--)
    {
        ans+="3+";
    }

    cout<<ans.substr(0,ans.size()-1)<<endl;

   
}


int32_t main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

    int T = 1;
 
    while (T--)
    {
        solve();
    }
    return 0;
}