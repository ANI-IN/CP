#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
using namespace std;
int MOD=1e9+7;  


void solve(){
    int n;
    cin>>n;
    int result=0;
    for(int i=1;i<=n;i++)
    {
        int x,y,z;
         cin>>x>>y>>z;
         int ans=x+y+z;
         if(ans>=2)
         result++;
    }
    cout<<result<<endl;
    
   
    
    return;
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