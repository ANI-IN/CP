#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
using namespace std;
int MOD=1e9+7;  


void solve(){
    
    int x=0,y=0;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            int k;
            cin>>k;
            if(k==1)
            {
                x=i;
                y=j;
            }
        }
    }

    

    int ans=abs(3-x)+abs(3-y);
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