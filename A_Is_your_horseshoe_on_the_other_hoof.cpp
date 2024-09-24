#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
using namespace std;
int MOD=1e9+7;  


void solve(){
    int n;
    string s;

   
    unordered_map<int,int> m;
    int ans=0;
    for(int i=0;i<6;i++)
    {
        int x;
        cin>>x;
  
        m[x]++;
    }

    cout<<4-m.size()<<endl;
    //cout<<ans<<endl;
   
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
