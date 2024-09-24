#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <cstring>
using namespace std;
int MOD=1e9+7;  


void solve(){
    string s;
    string t;
    cin>>s>>t;
   
    transform(s.begin(),s.end(),s.begin(), :: tolower);
    transform(t.begin(),t.end(),t.begin(), :: tolower);
    
    int ans = strcmp(s.c_str(), t.c_str());

    if(ans>0)
    cout<<"1"<<endl;
    else if(ans==0)
    cout<<"0"<<endl;
    else
    cout<<"-1"<<endl;
   
    
   
   
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