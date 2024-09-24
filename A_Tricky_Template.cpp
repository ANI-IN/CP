#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
using namespace std;
int MOD=1e9+7;  


void solve(){
    int n;
    cin>>n;
    string a,b,c;
    cin>>a>>b>>c;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=c[i] && b[i]!=c[i])
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
   
}


int32_t main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

    int T = 1;
    cin>>T;
    while (T--)
    {
        solve();
    }
    return 0;
}