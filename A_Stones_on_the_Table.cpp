#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
using namespace std;
int MOD=1e9+7;  


void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]==s[i+1])
        ans++;
    }
    cout<<ans<<endl;
   
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