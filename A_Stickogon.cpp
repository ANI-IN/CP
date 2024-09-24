#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
using namespace std;
int MOD=1e9+7;  


void solve(){
    int n;
    cin>>n;
    unordered_map<int,int> m;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        m[x]++;
    }

    for(auto it : m)
    {
        if(it.second>=3)
        ans+=it.second/3;
    }
    cout<<ans<<endl;
   
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