#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
using namespace std;
int MOD=1e9+7;  


void solve(){
    int n;
    cin>>n;
    unordered_map<int,int> m;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        m[arr[i]]=i+1;
    }
    for(int i=0;i<n;i++)
    {
        cout<<m[i+1]<<" ";
    }
    

    
   
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