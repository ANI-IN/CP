#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int MOD=1e9+7;  


void solve(){
    string s;
    string t;

    cin>>s>>t;
    reverse(s.begin(),s.end());
    if(s==t)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
   
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