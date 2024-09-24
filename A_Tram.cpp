#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
using namespace std;
int MOD=1e9+7;  


void solve(){
    int n;
    cin>>n;
    int maxi=0;
    int prev=0;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;

        prev=prev-a;
        maxi=max(maxi,prev);
        prev=prev+b;
        maxi=max(maxi,prev);
    }
    cout<<maxi<<endl;
   
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