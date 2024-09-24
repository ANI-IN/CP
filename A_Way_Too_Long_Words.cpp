#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int MOD=1e9+7;  


void solve(){
    string str;
    cin>>str;
    
    int n=str.size();
    string ans="";
    if(str.size()>10)
    {   
        char c=str[0];
        string first(1,c);
        c=str[n-1];
        string last(1,c);
        
        int len=n-2;
        string temp=to_string(len);

        ans=first+temp+last;
        cout<<ans<<endl;

        
    }
    else
    {
        cout<<str<<endl;
    }
    
   
}


int32_t main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}