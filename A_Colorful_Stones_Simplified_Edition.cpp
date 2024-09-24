#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
using namespace std;
int MOD=1e9+7;  


void solve(){
    string s;
    string t;
    cin>>s>>t;

    int step=0;
   
    for(int i=0;i<t.size();i++)
    {
        if(t[i]==s[step])
        step++;
    }
    cout<<step+1;
  
    
   
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