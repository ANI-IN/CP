#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
using namespace std;
int MOD=1e9+7;  


void solve(){
    int x;
    cin>>x;
    int ans=0;

    if(x%5==0)
    ans=x/5;
    else
    ans=x/5+1;

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