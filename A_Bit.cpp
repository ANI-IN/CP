#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
using namespace std;
int MOD=1e9+7;  


void solve(){
    int n;
    cin>>n;
    
    int ans=0;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;

        if(str=="++X" || str=="X++")
        ans++;
        else
        ans--;
    }
    cout<<ans;
   
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